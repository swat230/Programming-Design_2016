#include<iostream>
using namespace std;

int main ()
{
    int n = 0, k = 0;
    cin >> n >> k;
    
    int subway[54][54] = {0};
    int route[5][54] = {{0},{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {0, 4, 28, 27, 50, 49, 48, 47, 14, 46, 45, 44, 43, 42, 41, 9, 40, 39, 38, 37, 36, 22, 35, 34, 33, 32, 31, 30, 29, 4},
        {0, 13, 14, 15, 16, 17, 18, 6, 19, 20, 21, 22, 23, 24, 25, 26},
        {0, 32, 51, 52, 53}} ;
    
    int totalStation[5] = {0,12,29,15,4};//how many station do each route have
    
    for(int i = 1; i <= 4; i++)//input the original matrix
    {
        for (int j = 1; j <= (totalStation[i]-1) ; j++ )
        {
            subway[route[i][j]][route[i][j+1]] = subway[route[i][j+1]][route[i][j]] = 1;
        }
    }

    int subwayX[53][53] = {0};//to store the multiple result
    int final[53][53]={0};//to store the final result
    for (int i = 1; i <= 53; i++)
    {
        for (int j = 1; j <= 53; j++)
        {
            subwayX[i][j] = subway[i][j];
            final[i][j] = subway[i][j];
        }
    }

    for (int i = 1; i <= k - 1; i++)
    {
        
        int multiple[53][53]={0};//for caculation
        for (int j = 1; j<= 53; j++)
        {
            for (int k = 1; k <= 53; k++)
            {
                for (int l = 1; l <= 53; l++)
                {
                    multiple[j][k] += subway[j][l]*subwayX[l][k];//multiple the matrix
                }
            }
        }
        for (int j = 1; j <= 53; j++)
        {
            for (int k = 1; k <=53; k++)
            {
                subwayX[j][k]=multiple[j][k];
                final[j][k]+= multiple[j][k];//add every condition of edges <= k
            }
        }
    }
    
    if (k==1)//to make sure we count in the start node
    {
        for (int i = 1; i <= 53; i++)
            final[i][i] = 1;
    }
    
    int first = 1;//to make sure there is no space after the last number
    for (int i = 1; i <= 53; i++)
    {
        if (final[n][i]>=1)
        {
            if (first == 1)
            {
                cout << i;
            }
            else
            cout << " " << i;
            first = 0;
        }
    }
    
    
    return 0;
}