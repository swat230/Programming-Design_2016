#include<iostream>
using namespace std;

void officer(int demand[], int supply[], int schedule[]);// to calculate how many officer they need
int main ()
{
    int demand[8]={0};
    for (int i = 1; i <= 7; i++)
        cin >> demand[i];//input the demand
    
    int supply[8] = {0};
    int schedule[8] = {0};

    officer(demand, supply, schedule);//use funtion
    
    for (int i = 1; i <= 7; i++)//print out the result
    {
        if(i < 7)
            cout << schedule[i] << " ";
        if(i == 7)
            cout << schedule[i];
    }
    

    return 0;
}
void officer(int demand[], int supply[], int schedule[])//define the function
{
    for(int i = 1; i <= 7; i++)//examine from Mon. to Sun.
    {
        if(supply[i] < demand[i])//supply indicate that how many officer they can offer originally at that day
        {
            for (int j = i + 1; j <= i + 4; j++)
            {
                if (j <= 7)
                    supply[j] += demand[i] - supply[i];
                if (j > 7)
                {
                    int r = 0;
                    r = j % 7;
                    supply[r] += demand[i] - supply[i];
                }
            }
            schedule[i] = demand[i] - supply[i];//schedule record how many officer they should increase
            supply[i] += demand[i] - supply[i];
        }
    }
}