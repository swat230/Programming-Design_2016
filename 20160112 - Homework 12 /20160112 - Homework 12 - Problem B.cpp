#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
class Passenger
{
    private :
    static int offlineCnt ;
    static int searchingCnt ;
    static int travelingCnt ;
    int id ;
    int status ;
    int x ;
    int y ;
    int ratingCnt ;
    int* ratings ;
    double average;
    int commentCnt;
    int lateCnt;
public:
    int driver_id;
    int driver_index;
    Passenger(int id)
    {
        x = 0;
        y = 0;
        this->id = id;
        status = 1; //1:offline 2:searching 3:traveling
        ratingCnt = 0;
        ratings = new int[10000];
        average = 3;
        offlineCnt++;
        driver_id = 0;
        driver_index = 0;
        commentCnt = 0;
        lateCnt = 0;
    }
     
    bool late(int id)
    {
        if (this->id == id)
        {
            lateCnt++;
            return true;
        }
        return false;
    }
     
    bool search(int id, int x, int y)// change the status into searching
    {
         
        if (this->id == id)
        {
            this->x = x;
            this->y = y;
            status = 2;
            offlineCnt--;
            searchingCnt++;
            return true;
        }
        return false;
    }
    void travel()//if passenger find a driver, he start to travel
    {
         
        status =3;
        searchingCnt--;
        travelingCnt++;
    }
    bool arrive(int id,int x, int y, int rating)//if the passenger arrive, invoke this function and calculate his ratings
    {
        if (this->id == id)
        {
            commentCnt++;
            this->x = x;
            this->y = y;
            this->ratings[ratingCnt] = rating;
            ratingCnt ++;
            int sum = 0;
            for (int i = 0; i < ratingCnt; i++)
            {
                sum += ratings[i];
            }
            average = static_cast<double>(sum)/ratingCnt - 5 * static_cast<double>(lateCnt)/commentCnt;
            status = 1;
            travelingCnt--;
            offlineCnt++;
            return true;
        }
        return false;
    }
    void cannot_match()//if the passenger cannnot find a driver,change his status
    {
        status = 1;
        searchingCnt--;
        offlineCnt++;
    }
    double get_average()
    {
        return average;
    }
     
     
};
int Passenger::offlineCnt = 0,Passenger::searchingCnt = 0,Passenger::travelingCnt = 0;
 
class Driver
{
    private :
    static int offlineCnt ;
    static int searchingCnt ;
    static int travelingCnt ;
    int id ;
    int status ;
    int x ;
    int y ;
    int ratingCnt ;
    int* ratings ;
    double average;
    int commentCnt;
    int lateCnt;
public:
    bool operator >( const Driver & d) const
    {
        if(average > d.average)
            return true;
        else if (average == d.average && id < d.id)
            return true;
         
        return false;
    }
    Driver(int id)
    {
        this->id = id;
        x = 0;
        y = 0;
        status = 1; //1:offline 2:searching 3:traveling
        ratingCnt = 0;
        ratings = new int[10000];
        average = 3;
        offlineCnt++;
        commentCnt = 0;
        lateCnt = 0;
    }
    void late()
    {
        lateCnt++;
    }
     
    bool open(int id,int x, int y)//change driver's status into searching
    {
        if (this->id == id)
        {
            status = 2;
            offlineCnt--;
            searchingCnt++;
            this->x = x;
            this->y = y;
            return true;
        }
         
        return false;
    }
    bool close(int id)//change driver's status into offline
    {
        if (this->id == id)
        {
            status = 1;
            searchingCnt--;
            offlineCnt++;
            return true;
        }
        return false;
    }
    bool match(int x, int y, int m, int time)//find available driver
    {
         
        if(this->status == 2)
        {
            int a = 0, b = 0;
            a = this->x - x;
            b = this->y - y;
            if (a < 0)
                a= -a;
            if (b < 0)
                b= -b;
            if (a + b <= m * time)
            {
                return true;
            }
        }
        return false;
    }
    int get_id()
    {
        return id;
    }
    static int get_search()
    {
        return Driver::searchingCnt;
    }
    void travel()
    {
        status = 3;
        searchingCnt--;
        travelingCnt++;
    }
    void arrive(int rate,int x,int y)
    {
        commentCnt++;
        this->x = x;
        this->y = y;
        status = 2;
        travelingCnt --;
        searchingCnt++;
        ratings[ratingCnt] = rate;
        ratingCnt++;
        int sum = 0;
        for (int i = 0; i < ratingCnt; i++)
        {
            sum += ratings[i];
        }
        average = static_cast<double>(sum)/ratingCnt - 5 * static_cast<double>(lateCnt)/commentCnt;
    }
    int get_status()
    {
        return status;
    }
    double get_average()
    {
        return average;
    }
};
int Driver::offlineCnt = 0, Driver::searchingCnt = 0, Driver::travelingCnt = 0;
 
int main()
{
    int m = 0;
    cin >> m;
     
    char type = 0;
     
    Passenger* p[10000];
    Driver* d[10000];
    int p_count = 0;//to count the total passenger
    int d_count = 0;//to count the total driver
     
    while (cin >> type)
    {
        if (type == 'P')//add a new passenger
        {
            int id = 0;
            cin >> id ;
            p[p_count] = new Passenger(id);
            p_count++;
        }
        if (type == 'D')//add a new driver
        {
            int id = 0;
            cin >> id;
            d[d_count] = new Driver(id);
            d_count++;
        }
        if (type == 'O')//driver open the app
        {
            int id = 0, x = 0, y = 0;
            cin >> id >> x >> y;
            for (int i = 0; i < d_count; i++)
            {
                if (d[i]->open(id, x, y))
                    break;
            }
             
        }
        if (type == 'S')//passenger search for driver
        {
            int id = 0, x = 0, y = 0;
            cin >> id >> x >> y;
            for(int i = 0; i < p_count; i++)
            {
                if(p[i]->search(id,x,y))
                {
                    if (p[i]->get_average() >= 2)//make sure if the passenger's average rate >= 2
                    {
                        int time = 0;//increase if we couldn't find the driver in time*m distance
                        int index = 0;
                         
                        if(Driver::get_search() > 0)//make sure if we have available driver
                        {
                            while (p[i]->driver_id == 0)
                            {
                                time++;
                                for (int j = 0 ; j < d_count; j++)
                                {
                                    if (d[j]->match(x, y, m, time))
                                    {
                                        p[i]->driver_id = d[j]->get_id();
                                        p[i]->driver_index = j;
                                        index = j;
                                        break;
                                    }
                                }
                                 
                            }
                             
                            for (int k = index + 1; k < d_count; k++)
                            {
                                if(d[k]->match(x, y, m, time))
                                {
                                    if (*d[k] > *d[index])
                                    {
                                        index = k;
                                        p[i]->driver_id = d[k]->get_id();
                                        p[i]->driver_index = k;
                                    }
                                }
                            }
                            p[i]->travel();
                            d[index]->travel();
                             
                        }
                        if(Driver::get_search() == 0)//if there is no available driver
                            p[i]->cannot_match();
                         
                    }
                    break;
                }
                 
            }
             
        }
         
        if (type == 'A')// passenger arrive the destination
        {
            int id = 0, x = 0, y = 0, d_rate = 0, p_rate = 0;
            cin >> id >> x >> y >> d_rate >> p_rate;
            string driverC;
            string passengerC;
             
            cin.ignore();
            getline(cin, driverC);
            getline(cin, passengerC);
             
             
            transform(driverC.begin(), driverC.end(), driverC.begin(), ::tolower);
            transform(passengerC.begin(), passengerC.end(), passengerC.begin(), ::tolower);
             
            if (passengerC.find("late")!= string::npos)
            {
                if(passengerC.substr(passengerC.find("late") + 4, 1) == " " || passengerC.substr(passengerC.find("late") + 4, 1) == "!" )
                {
                    for (int i = 0; i < p_count; i++)
                    {
                 
                        if (p[i]->late(id))
                        {
                            break;
                        }
                    }
                }
            }
 
            for (int i = 0; i < p_count; i++)
            {
                if (p[i]->arrive(id , x, y, p_rate))
                {
                    if (driverC.find("late")!=string::npos)
                    {
                        if(driverC.substr(driverC.find("late") + 4, 1) == " " || driverC.substr(driverC.find("late") + 4, 1) == "!" )
                            d[p[i]->driver_index]->late();
                    }
                     
                    d[p[i]->driver_index]->arrive(d_rate,x ,y);
                    p[i]->driver_id = 0;
                    p[i]->driver_index = 0;
                    break;
                }
            }
             
             
        }
        if (type == 'C')//driver close the app
        {
            int id = 0;
            cin >> id;
            for (int i = 0; i < d_count; i++)
            {
                if (d[i]->close(id))
                    break;
            }
             
        }
    }
     
     
    int a = 10000;//print out the answer
    for (int i = 0; i < d_count; i++)
    {
        if (a ==10000)
        {
            if (d[i]->get_status() == 2)
            {
                cout << d[i]->get_id();
                a = 10;
            }
             
        }
        else if (a == 10)
        {
            if (d[i]->get_status() == 2)
                cout  << " " << d[i]->get_id();
        }
    }
     
    return 0;
}