#include <iostream>
#include <algorithm>    // std::sort
using namespace std;
int main()
{
	int n = 0, box = 0, Alice = 1, Bob = 2, Cindy = 3, Dororo = 4, AliceSum = 0, BobSum = 0, CindySum = 0, DororoSum = 0;
	cin >> n;
	
	int least = 0, leastperson = 0;//least:到目前為止最少的鑽石數, leastperson:到目前為止鑽石最少的人 
    for(int i = 0; i < n; i++)//從第一個箱子打到最後一個箱子 
	{ 
		least = AliceSum + 1 , leastperson = 0;//每個回合初的least一定要比Alice擁有的鑽石數多，才能確保if的條件被滿足 
        cin >> box;
	    if(AliceSum < least)
	    {
	    	least = AliceSum;
	    	leastperson = Alice;
		}	    	
	    if(BobSum < least)
	    {
	    	least = BobSum;
	        leastperson = Bob;
		}
	    if(CindySum < least)
	    {
	    	least = CindySum;
	    	leastperson = Cindy;
		}
	    if(DororoSum  < least)
	    {
	    	least = DororoSum;
	    	leastperson = Dororo;
		}
	    if(Alice == leastperson)
	    	AliceSum = AliceSum + box;
	    //就算Bob、Cindy、Dororo的鑽石數跟Alice一樣，一旦Alice先變成到目前為止鑽石最少的人，他們就不會變leastperson，因為鑽石數沒有小於least(=Alice) 
	    if(Bob == leastperson)
	    	BobSum = BobSum + box;
	    if(Cindy == leastperson)
	        CindySum = CindySum + box;
	    if(Dororo == leastperson)
    		DororoSum = DororoSum + box;
    		
	} 
	int a[4] = {AliceSum, BobSum, CindySum, DororoSum};//宣告陣列以進行排序 
	sort(a, a + 4);//遞增排序 
	
	for (int i = 0; i < 3; ++i)//印出排序後的陣列 
        cout << a[i] << " ";
    cout << a[3];//因為最後一個後面不能有空格故獨立列示 
	
	
    
	return 0;
	
}