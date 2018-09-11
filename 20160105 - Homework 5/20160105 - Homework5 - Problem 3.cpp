#include <iostream>
using namespace std;
int totalTIime(int, int [], int [][100], int []);//declare function
int main()
{
    int n = 0;
    cin >> n;//input the number of jobs
    int p[100] = {0};
    for (int i = 1 ; i <= n; i++)
        cin >> p[i];// input the processing times of the n jobs
    
    int s[100][100]={0};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> s[i][j]; //input setup time
    
    int o[100] = {0};// for the current order
    int schedule[100] = {0};//for the final schedule
    for (int i = 1; i <= n; i++)
    {
        o[i] = i;
        schedule[i] = i;
    }
    
    int   makespan = 0;
    makespan = totalTIime(n, p, s, o);//to caculate the original makespan
    
    int indexsum = 0;
    int smallerIndex = 0;
    int findSmaller = 100;
    int eachMakespan = 0;
    int eachIndexsum = 0;
    int eachIndex = 0;
    
    while (findSmaller != 2)//to test if the order has smaller neighbor
    {
        findSmaller = 100;
        
        for (int x = 1; x <= n - 1; x++)
        {
            for (int y = x + 1; y <= n; y++)
            {
                int temp = 0;
                temp = o[x];
                o[x] = o[y];
                o[y] = temp;
                
                eachMakespan = totalTIime(n, p, s, o);
                
                if  (eachMakespan < makespan)
                    findSmaller = 0;
                
                temp = o[x];
                o[x] = o[y];
                o[y] = temp;//return to the original order
                
            }
        }
        if (findSmaller == 100)//if the order doesn't have the smaller neighbor, out of the while loop
            findSmaller = 2;

        if (findSmaller ==0)//if the order has smaller order
        {
            for (int i = 1; i <= n - 1; i++)
            {
                for (int j = i + 1; j <= n; j++)
                {
                    int temp = 0;
                    temp = o[i];
                    o[i] = o[j];
                    o[j] = temp;
                    
                    eachMakespan = totalTIime(n, p, s, o);
                    eachIndexsum = o[i]+o[j];
                    eachIndex = o[i];
                    
                    if  ((eachMakespan < makespan)||(makespan == eachMakespan && indexsum > eachIndexsum)||(makespan == eachMakespan && indexsum == eachIndexsum && eachIndex < smallerIndex))
                    {
                        makespan = eachMakespan;
                        indexsum = eachIndexsum;
                        smallerIndex = eachIndex;
                        
                        for (int i = 1; i <= n; i++)
                        {
                            schedule[i]= o[i];
                        }
                    }
                    
                    
                    temp = o[i];
                    o[i] = o[j];
                    o[j] = temp;//return to the original order
                }
                
            }
            for (int i = 1; i <= n; i++)
                o[i] = schedule[i];//to test if the final order has a smaller neighbor
            indexsum = 0;
            smallerIndex = 0;
        }
    }

    for (int i = 1; i <= n; i++)
        cout << schedule[i] << " ";// output the final schedule
    
    cout << makespan;//output the final makespan
    

    return 0;
}

    

int totalTIime(int n,int p[],int s[][100], int o[])//to calculate processing time + setup time
{
    int Ptime = 0;
    int Stime = 0;
    for (int i = 1 ; i <= n; i++)
    {
        Ptime = Ptime + p[i];
    }
    
    for (int i = 1;  i < n; i++)
    {
        Stime = Stime + s[o[i]][o[i+1]];
    }
    
    return Stime + Ptime;
}