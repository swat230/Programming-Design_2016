#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	cin >> a >> b >> c;
	d = b + c;
	e = b - c;
	f = b * c;
	
	//確保e為正數 
	if(e < 0)
	{
		e = -e;
	}
	//先限定a,b,c的範圍 
	while(a > 5)
	{
		cout << "Please enter a again:";
		cin >> a;
	}
	while(a < 1)
	{
		cout << "Please enter a again:";
		cin >> a;
	}
	while(b > 1000)
	{
		cout << "Please enter b again:";
		cin >> b;
	}
	while(b < -1000)
	{
		cout << "Please enter b again:";
		cin >> b;
	}
	while(b == 0)
	{
		cout << "Please enter b again:";
		cin >> b;
	}
	while(c > 1000)
	{
		cout << "Please enter c again:";
		cin >> c;
	}
	while(c < -1000)
	{
		cout << "Please enter c again:";
		cin >> c;
	}
	while(c == 0)
	{
		cout << "Please enter c again:";
		cin >> c;
	}
	
	if(a == 1)
	{
		cout << d ;
	}
	if(a == 2)
	{
		cout << e ;
	} 
	if(a == 3)
	{
 		cout << f;
	}
	if(a == 4)
	{
	//將b,c轉為正數以方便操作 
		if(b < 0)
		{
			b = -b; 
		}
		if(c < 0)
		{
			c = -c; 
		}
		
	//比較b,c的大小便可得知被除數及除數是誰 
		 
		if(b >= c)
		{
			if(b % c == 0)
			{
				cout << "1";
				
			}
			if(b % c != 0)
			{
				cout << "0";
				
			}
		}
		if(c > b)
		{
			if(c % b == 0)
			{
				cout << "1";
				
			}	
			if(c % b != 0)
			{
				cout << "0";
		    }	
		}	
    }
		
	if(a == 5)
	{
		if(d > e)
		{
			if(e > f)
			{
				cout << d;
			}		
		}
		if(d > f)
		{
			if(f > e)
			{
				cout << d;
			}
		} 
		if(e > d)
		{
			if(d > f)
			{
				cout << e;
			}
	
		}
		if(f > e)
		{
			if(e > d)
			{
				cout << f;
			}
	
		}
		if(f > d)
		{
			if(d > e)
			{
				cout << f;
			}
	
		}
		if(f == d)
		{
			if(f > e)
			{
				cout << f;
			}
			if(f < e)
			{
				cout << e;
			}
			
		}
    }
	
	return 0;
}

 


