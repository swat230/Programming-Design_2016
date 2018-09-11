#include <iostream>
using namespace std ;
 
int main ()
{
    int r = 0, g = 0, b = 0, n = 0, k = 0, errorR = 0, errorG = 0, errorB = 0, sametime_N = 0, unacceptable_N = 0;
    cin >> r >> g >> b >> n >> k;//輸入客戶要求的ＲＧＢ，張數，標準
    for (int i = 0; i < n; i++)//確認每張紙的ＲＧＢ符合標準
    {
        int copyR = 0, copyG = 0, copyB = 0;
        cin >> copyR >> copyG >> copyB;//輸入每張紙的ＲＧＢ
        if ((copyR - r > k || r - copyR > k) || (copyG - g > k || g - copyG > k) || (copyB - b > k || b - copyB > k))
        //確認有無符合標準
        {
            if (copyR > r)//檢查error正還負
                errorR++;//如果為正，error tendency＋1
            else if (copyR < r)
                errorR--;//如果為負，error tendency-1
            if (copyG > g)
                errorG++;
            else if (copyG < g)
                errorG--;
            if (copyB > b)
                errorB++;
            else if (copyB < b)
                errorB--;
            if ((copyR != r && copyG != g) || (copyG != g && copyB != b) || (copyB != b && copyR != r)
                || (copyR != r && copyG != g && copyB != b))//檢查同時錯誤的情況
                sametime_N++;//如果有同時錯誤，number of bad copies with 2 or 3 erroneous primitive colors＋1
            unacceptable_N++;//如果不符合標準，不合格的個數就多一個
        }
    }
    cout << errorR << " " << errorG << " " << errorB  << " " << sametime_N << " " << unacceptable_N << endl ;
    return 0;
}