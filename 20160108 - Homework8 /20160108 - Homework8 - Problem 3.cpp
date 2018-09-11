#include<iostream>
using namespace std;

int officer(int startDay,int demand[]);// to calculate how many officer they need
int main ()
{
    int demand[8]={0};
    for (int i = 1; i <= 7; i++)
        cin >> demand[i];//input the demand
    
    
    int final[8]={0};
    
    for (int i = 1; i <= 7; i++)
        final[i] = officer(i, demand);//use funtion
    
    for (int i = 1; i <= 7; i++)//print out the result
    {
        if(i < 7)
            cout << final[i] << " ";
        if(i == 7)
            cout << final[i];
    }
    
    
    return 0;
}
int officer(int startDay,int demand[])//define the function
{
    int supply[8] = {0};
    int schedule[8] = {0};
    for(int i = startDay; i <= startDay + 6; i++)//examine from startday
    {
        int s = 0;
        if (i <= 7)
            s = i;
        if (i > 7)
            s = i % 7;
        if(supply[s] < demand[s])//supply indicate that how many officer they can offer originally at that day
        {
            int difference = 0;
            difference = demand[s] - supply[s];

            for (int j = s + 1; j <= s + 4; j++)
            {
                if (j <= 7)
                    supply[j] += difference;
                if (j > 7)
                {
                    int r = 0;
                    r = j % 7;
                    supply[r] += difference;
                }
            }
            schedule[s] = difference;//schedule record how many officer they should increase
            supply[s] += difference;
        }
    }
    int final = 0;//final is the total of schedule array
    for (int i = 1; i <= 7; i++)
        final += schedule[i];
    return final;
    
}