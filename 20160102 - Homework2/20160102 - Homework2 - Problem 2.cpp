#include <iostream>
using namespace std;
int main()
{
	int n = 0, m = 0, k = 0, t = 0, line = 0, EachNumber = 0,sum = 0;
	cin >> n >> m >> k >> t;
	//確認遊戲玩了幾輪 
	if (t % n >=k)
		line = t / n + 1;
	else
		line = t / n ;
	
	while(line > 0)
	{
		EachNumber = k + (line - 1) * n;//算出每一輪k輪到的數字 
		if(EachNumber % m !=0)//確定不是m的倍數 
		{
			if((EachNumber -m) % 10 != 0 )//確定尾數不是m 
			{
				sum = sum + EachNumber;//加總每一輪喊出的數字 
			}
		}
		line = line - 1;//從最後一輪確認到第一輪 
	}

    cout << sum; 
	return 0;
}