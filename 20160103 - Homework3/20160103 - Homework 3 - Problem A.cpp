#include <iostream>
using namespace std ;

int main ()
{
    int r = 0, g = 0, b = 0, n = 0, k = 0, unacceptable_N = 0;
    cin >> r >> g >> b >> n >> k;//輸入客戶要求的ＲＧＢ，張數，標準
    for (int i = 0; i < n; i++)//確認每張紙的ＲＧＢ符合標準
    {
        int copyR = 0, copyG = 0, copyB = 0;
        cin >> copyR >> copyG >> copyB;//輸入每張紙的ＲＧＢ
        if ((copyR - r > k || r - copyR > k) || (copyG - g > k || g - copyG > k) || (copyB - b > k || b - copyB > k))
            unacceptable_N++;//如果不符合標準，不合格的個數就多一個
    }
    cout << unacceptable_N;//輸出不合格的總張數
    return 0;
}