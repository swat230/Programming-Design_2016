#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[20000];// store the sentence
    cin.getline(a, 20000);
    
    char b[200];// store the keyword sentence
    cin.getline(b, 200);
    
    char sentence[2000][20];
    char target[20][20];
    char delim[] = ".,!- \n?";//things should  be removed
    char delim_T[] = " ";//things should be removed
    
    for (int i = 0; i < strlen(a); i++)
    {
         a[i]= static_cast<char>(tolower(a[i]));
    }
    
    for (int i = 0; i < strlen(b); i++)
    {
        b[i]= static_cast<char>(tolower(b[i]));
    }

    int wordCnt = 0;
    int sentence_number = 0;
    char* start = strtok(a, delim);
    while(start != nullptr)//cut sentence into several words
    {
        strcpy(sentence[wordCnt], start);
        wordCnt++;
        sentence_number++;
        start = strtok(nullptr, delim);
    }
    
    int wordCnt_T = 0;
    int keyword_number = 0;
    char* start_T = strtok(b, delim_T);
    while (start_T != nullptr)//cut sentence into several words
    {
        strcpy(target[wordCnt_T], start_T);
        wordCnt_T++;
        keyword_number++;
        start_T = strtok(nullptr, delim_T);
    }
    
    
    
    int* count = new int[keyword_number]();
    
    for (int i = 0; i < keyword_number ; i++ )
    {
        for (int j = 0 ; j < sentence_number ; j++)
        {
            if(strcmp(sentence[j],target[i]) == 0)//to match the keyword
            {
                count[i]++;
            }
        }
    }
    
    for (int i = 0; i < keyword_number; i++)//print out the result
    {
        if (i == keyword_number - 1)
            cout << count[i];
        else
            cout << count[i] << " ";
    
    }
    
    return 0;
}