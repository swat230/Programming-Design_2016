#include<iostream>
using namespace std;

int totalScore(int a[],int s1, int s2, int s3,int n);//declare a function

int main ()
{
    int n = 0, s1 = 0, s2 = 0, s3 = 0, ticTocToe = 0, max = 0;
    cin >> n >> s1 >> s2 >> s3;
    int a[9]={1,2,3,4,5,6,7,8,9};
    
    for (int i = 0; i < n; i++)
    {
        cin >> ticTocToe;
        
        if (i % 2 == 0) //for circle player
        {
            for (int j = 0; j < 9; j++)
                if (ticTocToe == a[j])
                    a[j] = 100;
        }
        if (i % 2 == 1) //for cross player
        {
            for (int j = 0; j < 9; j++)
            {
                if (ticTocToe == a[j])
                    a[j] = 20;
            }
        }
        
        
    }
    
    for (int i = 0; i < 9; i++) //if there is no circle or cross in the square, the square become 0
    {
        if (a[i] == (i+1) )
            a[i] = 0;
    }
    
   
    int score[9]={0};
    
    if (n%2 == 1)// if n is odd, betaTTT is cross player
    {
        for (int i = 0; i < 9; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 20;
                score[i] = totalScore(a, s1, s2, s3, n);
                a[i] = 0;
            }
        }
        
    }
    if (n % 2 == 0)// if n is even, betaTTT is circle player.
    {
        for (int i = 0; i < 9; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 100;
                score[i] = totalScore(a, s1, s2, s3, n);
                a[i] = 0;
                
            }
        }
        
    }
    int maxPosition = 1;
    max = score[0];
    for(int k = 0; k < 9; k++)
        if(score[k] > max)//to find the max of the score
        {
            max = score[k];
            maxPosition = k + 1;
        }
    
    cout << maxPosition << " " << max;
    
    return 0;
}

int totalScore(int a[],int s1, int s2, int s3, int n)//define the function
{
    int x1 = 0, x2 = 0, x3 = 0;
    int line[8]={0};
    line[0] = a[0] +a[3] + a[6];
    line[1] = a[1] +a[4] + a[7];
    line[2] = a[2] +a[5] + a[8];
    line[3] = a[0] +a[1] + a[2];
    line[4] = a[3] +a[4] + a[5];
    line[5] = a[6] +a[7] + a[8];
    line[6] = a[0] +a[4] + a[8];
    line[7] = a[2] +a[4] + a[6];
    
    if (n % 2 == 1)// if n is even, betaTTT is circle player.
    {
        for (int j = 0; j < 8 ; j++)//to caculate x1,x2,x3
        {
            if (line[j] == 20)
                x1++;
            if (line[j] == 40)
                x2++;
            if (line[j] == 60)
                x3++;
        }
    }
    if (n % 2 == 0)// if n is even, betaTTT is circle player.
    {
        for (int j = 0; j < 8 ; j++)//to caculate x1,x2,x3
        {
            if (line[j] == 100)
                x1++;
            if (line[j] == 200)
                x2++;
            if (line[j] == 300)
                x3++;
        }
    }
    return s1 * x1 + s2 * x2 + s3 * x3;//return score
}