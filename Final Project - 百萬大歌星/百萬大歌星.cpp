#include<iostream>
#include <conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
#include <string.h>

//-------------------------------------------------------------------"include"--
#include "Console.h"
#pragma comment(lib,"winmm.lib")
using namespace std;

void waiting(int, double);
void playgame();
void print_menu();
void print_millionstar();
void trash();
void jj();
void jolin();
void male();
void amei();
void lucky();
void sad();
void dora();
void definitely();
void starrain();

clock_t startSong;
namespace con = JadedHoboConsole;

int main()
{
	playgame();
	return 0;
}
void trash()
{
	cout << con::clr;
    cout << con::bg_black << setw( 4 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " "<< con::bg_blue << setw(60 ) << "     " << endl;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "           ▊          ▊▊▊▊        ▊           " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊  ▊▊▊▊▊      ▊   ▊   ▊▊▊▊▊▊▊     " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊    ▊  ▊  ▊          ▊           " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊▊▊▊ ▊  ▊  ▊▊▊▊▊▊▊▊ ▊▊▊▊▊▊      " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊    ▊  ▊     ▊  ▊   ★   ▊      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊    ▊  ▊▊  ▊   ▊▊▊▊▊▊      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊  ▊▊▊▊ ▊▊         ▊           " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊        ▊  ▊▊   ▊▊▊▊▊▊      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊▊▊▊▊▊▊▊▊     ▊ ▊  ▊       ▊           " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�歈�������������" << "�歈���������������" <<"�歈���������������" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�� 1. 三選一  ��" << "�� 2. 一字提示  ��" <<"�� 3. call out  ��" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�裺�������������" << "�裺���������������" <<"�裺���������������" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   

	mciSendString("close trash.mp3" , NULL, 0, 0);
	mciSendString("open trash.mp3" , NULL, 0, 0);
	mciSendString("play trash.mp3" , NULL, 0, 0); 
	startSong = clock(); //記錄歌曲開始時刻

    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << setw( 30 )<<" " << "歌名：垃圾車\n";
    waiting(0,03.00);
    cout << setw( 30 )<<" " << "詞曲：阿信　編：五月天\n";
    waiting(0,05.00);
    cout << setw( 30 )<<" " << "演唱：五月天\n";
    waiting(0,07.00);
    cout << setw( 30 )<<" " << "專輯名稱：神的孩子都在跳舞\n";
    waiting(0,09.00);
    cout << setw( 30 )<<" " << "發行日：2004 年 11 月 5 日\n";
    waiting(0,30.97);
    cout << setw( 30 )<<" " << "雖然你脾氣壞，對待朋友又差\n";
    waiting(0,35.36);
    cout << setw( 30 )<<" " << "凸槌又更愛牽拖\n";
    waiting(0,39.79);
    cout << setw( 30 )<<" " << "佳在你遇到我，不愛計較的我\n";
    waiting(0,44.18);
    cout << setw( 30 )<<" " << "算你壞人有好命\n";
    waiting(0,48.63);
    cout << setw( 30 )<<" " << "我走路你坐車，你吃飯我洗碗\n";
    waiting(0,53.04);
    cout << setw( 30 )<<" " << "你被欺負我拚命\n";
    waiting(0,57.47);
    cout << setw( 30 )<<" " << "若為了爽到你，可以艱苦到我\n";
    waiting(1,01.68);
    cout << setw( 30 )<<" " << "因為，咱緣分不可散\n";
    waiting(1,05.75);
    cout << setw( 30 )<<" " << "有你，我才未孤單\n";
    waiting(1,09.35);
    cout << setw( 30 )<<" " << "有你的陪伴，我才有靠山\n";
    waiting(1,13.85);
    cout << setw( 30 )<<" " << "你若不爽，我是你的垃圾車\n";
    waiting(1,19.32);
    cout << setw( 30 )<<" " << "★★★★★★★\n";
	char szKey[] = "每天聽你的心聲";
	char szInput[80];
	cout << setw( 30 )<<" "; 
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		cout << setw( 30 )<<" " << "您真棒!";
	}
	else
	{
		cout << setw( 30 )<<" " << "錯！" << endl;
		cout << setw( 30 )<<" " << "正解:" <<  szKey << endl <<endl;
	}	
}
void jj()
{
	cout << con::clr;
	cout << con::bg_black << setw( 4 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " "<< con::bg_blue << setw(60 ) << "     " << endl;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "           ▊          ▊▊▊▊        ▊           " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊  ▊▊▊▊▊      ▊   ▊   ▊▊▊▊▊▊▊     " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊    ▊  ▊  ▊          ▊           " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊▊▊▊ ▊  ▊  ▊▊▊▊▊▊▊▊ ▊▊▊▊▊▊      " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊    ▊  ▊     ▊  ▊   ★   ▊      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊    ▊  ▊▊  ▊   ▊▊▊▊▊▊      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊  ▊▊▊▊ ▊▊         ▊           " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ▊    ▊  ▊        ▊  ▊▊   ▊▊▊▊▊▊      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊▊▊▊▊▊▊▊▊     ▊ ▊  ▊       ▊           " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�歈�������������" << "�歈���������������" <<"�歈���������������" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�� 1. 三選一  ��" << "�� 2. 一字提示  ��" <<"�� 3. call out  ��" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�裺�������������" << "�裺���������������" <<"�裺���������������" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   
	mciSendString("close not for who song.mp3" , NULL, 0, 0);
	mciSendString("open not for who song.mp3" , NULL, 0, 0);
	mciSendString("play not for who song.mp3" , NULL, 0, 0); 
	startSong = clock(); //記錄歌曲開始時刻
	
	startSong = clock(); //記錄歌曲開始時刻

    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：不為誰而作的歌\n";
    waiting(0,05.00);
    cout << "演唱：林俊傑\n";
    waiting(0,07.00);
    cout << "詞:林秋離 曲:林俊傑\n";
    waiting(0,09.00);
    cout << "專輯名稱：和自己對話\n";
    waiting(0,27.03);
    cout << "原諒我這一首 不為誰而作的歌\n";
    waiting(0,33.79);
    cout << "感覺上彷彿窗外的夜色\n";
    waiting(0,40.31);
    cout << "曾經有那一刻 回頭竟然認不得\n";
    waiting(0,47.38);
    cout << "需要 從記憶再摸索 的人\n";
    waiting(0,54.25);
    cout << "和他們關心的 的地方\n";
    waiting(1,00.78);
    cout << "和那些走過的 請等一等\n";
    waiting(1,10.13);
    cout << "夢為努力澆了水 愛在背後往前推\n";
    waiting(1,16.67);
    cout << "當我抬起頭才發覺 我是不是忘了誰\n";
    waiting(1,23.35);
    cout << "累到整夜不能睡 夜色哪裡都是美\n";
    waiting(1,29.99);
    cout << "★★★★★ ★ ★★ ★★ ★★ ★★ ★★★\n";//一定有個人 他 躲過 避過 閃過 瞞過 他是誰
    char szKey[] = "一定有個人 他 躲過 避過 閃過 瞞過 他是誰";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}
void jolin()
{
	cout << con::clr;
	cout << con::bg_black << setw( 4 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " "<< con::bg_blue << setw(60 ) << "     " << endl;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) <<  "▊▊▊ ▊     ▊▊▊ ▊  ▊ ▊             " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) <<  "▊  ▊ ▊     ▊  ▊ ▊  ▊ ▊             " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊  ▊ ▊     ▊  ▊ ▊  ▊ ▊             " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊  ▊ ▊     ▊▊▊ ▊  ▊ ▊             " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊▊▊ ▊     ▊  ▊ ▊▊▊ ▊             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊     ▊     ▊  ▊   ▊   ▊             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊     ▊     ▊  ▊   ▊   ▊             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊     ▊     ▊  ▊   ▊                  " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "▊     ▊▊▊ ▊  ▊   ▊   ▊             " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�歈�������������" << "�歈���������������" <<"�歈���������������" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�� 1. 三選一  ��" << "�� 2. 一字提示  ��" <<"�� 3. call out  ��" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�裺�������������" << "�裺���������������" <<"�裺���������������" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   
	mciSendString("close play.mp3" , NULL, 0, 0);
	mciSendString("open play.mp3" , NULL, 0, 0);
	mciSendString("play play.mp3" , NULL, 0, 0); 

     startSong = clock(); //記錄歌曲開始時刻
    
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：PLAY 我呸\n";
    waiting(0,03.00);
    cout << "作詞：李格弟 作曲：倪子岡\n";
    waiting(0,05.00);
    cout << "演唱：蔡依林\n";
    waiting(0,18.98);
    cout << "半夜一點的\n";
    waiting(0,19.76);
    cout << "無邪浪蕩睡衣姐妹\n";
    waiting(0,21.36);
    cout << "清晨五點的\n";
    waiting(0,22.00);
    cout << "萬人登山體操大會\n";
    waiting(0,23.66);
    cout << "六零年代歐洲前衛\n";
    waiting(0,24.80);
    cout << "地下導演討論會\n";
    waiting(0,26.12);
    cout << "九零年代偶像復出\n";
    waiting(0,27.17);
    cout << "簽名握手擁抱會\n";
    waiting(0,28.50);
    cout << "零下五十度北極探險\n";
    waiting(0,29.96);
    cout << "為期十幾天\n";
    waiting(0,30.91);
    cout << "撒哈拉酷熱\n";
    waiting(0,31.74);
    cout << "絕對崩潰生存考驗\n";
    waiting(0,33.31);
    cout << "三天兩夜集體K歌\n";
    waiting(0,34.44);
    cout << "歇斯底里的宣洩\n";
    waiting(0,35.64);
    cout << "芳香精油深度放鬆\n";
    waiting(0,37.30);
    cout << "無意識催眠\n";
    waiting(0,38.13);
    cout << "文藝裝逼\n";
    waiting(0,38.68);
    cout << "亂世盛裝派對\n";
    waiting(0,40.45);
    cout << "女神豐乳肥臀\n";
    waiting(0,41.40);
    cout << "九頭身材\n";
    waiting(0,42.82);
    cout << "男神彎弓射鵰\n";
    waiting(0,43.75);
    cout << "六塊肌排\n";
    waiting(0,45.27);
    cout << "比錢更重要的是\n";
    waiting(0,46.41);
    cout << "人魚線\n";
    waiting(0,47.27);
    cout << "管你小眾大眾\n";
    waiting(0,48.84);
    cout << "我呸\n";
    waiting(0,49.69);
    cout << "管你是小清新是重口味\n";
    waiting(0,51.29);
    cout << "我呸\n";
    waiting(0,52.16);
    cout << "★★★★★★★★\n";//管你是哪一類甲蟲
	char szKey[] = "管你是哪一類甲蟲";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}
void male()
{
	cout << con::clr;
	mciSendString("close male domestic.mp3" , NULL, 0, 0);
	mciSendString("open male domestic.mp3" , NULL, 0, 0);
	mciSendString("play male domestic.mp3" , NULL, 0, 0); 
	startSong = clock(); //記錄歌曲開始時刻
 
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：男傭\n";
    waiting(0,03.00);
    cout << "詞曲：吳克群\n";
    waiting(0,05.00);
    cout << "歌手：吳克群\n";
    waiting(0,07.00);
    cout << "專輯：將軍令\n";
    waiting(0,09.00);
    cout << "發行日：2006 年 10 月 13 日\n";
    waiting(0,18.41);
    cout << "韓劇　看太多　你最愛野蠻女友\n";
    waiting(0,23.11);
    cout << "巴掌　巴不夠　活該倒楣的是我\n";
    waiting(0,27.76);
    cout << "怕你哭怕你淚流　怕到朋友唾棄我\n";
    waiting(0,32.77);
    cout << "我只是你的男傭\n";
    waiting(0,37.15);
    cout << "路上　車太多　司機老吳來接送\n";
    waiting(0,41.82);
    cout << "健身　健不夠　還要懂一點幽默\n";
    waiting(0,46.56);
    cout << "煮飯燒菜你不懂　洗衣擦地的粗活\n";
    waiting(0,51.48);
    cout << "全部都由我來做\n";
    waiting(0,55.60);
    cout << "不管你站著坐著趴著我在你左右\n";
    waiting(1,00.25);
    cout << "如果你累了酸了癱了我幫你按摩\n";
    waiting(1,04.94);
    cout << "★★★★★★ ★★★★★★\n";//我做你的男傭　一天到晚上工
    char szKey[] = "我做你的男傭　一天到晚上工";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}
void amei()
{
	cout << con::clr;
	mciSendString("close three days.mp3" , NULL, 0, 0);
	mciSendString("open three days.mp3" , NULL, 0, 0);
	mciSendString("play three days.mp3" , NULL, 0, 0); 
	startSong = clock(); //記錄歌曲開始時刻

    startSong = clock(); //記錄歌曲開始時刻
    
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：三天三夜\n";
    waiting(0,03.00);
    cout << "歌手：張惠妹\n";
    waiting(0,09.73);
    cout << "Ba Ba Ba Ba . . .\n";
    waiting(0,23.37);
    cout << "一點都不會累 我已經跳了三天三夜\n";
    waiting(0,30.12);
    cout << "我現在的心情喝汽水也會醉Oh Oh Oh\n";
    waiting(0,36.09);
    cout << "完全都不會疲倦 我還要再跳三天三夜\n";
    waiting(0,42.48);
    cout << "我現在的心情輕得好像可以飛 Oh Oh Oh\n";
    waiting(0,48.78);
    cout << "OK OK 加入我的行列\n";
    waiting(0,51.78);
    cout << "NoK NoK 白天跳到黑夜\n";
    waiting(0,55.10);
    cout << "Always Always 快樂不會吃虧\n";
    waiting(0,58.10);
    cout << "No Way No Way 誰也別想拒絕 yeah\n";
    waiting(1,04.34);
    cout << "三天三夜的三更半夜 跳舞不要停歇\n";
    waiting(1,10.44);
    cout << "三天三夜的三更半夜 飄浮只靠音樂\n";
    waiting(1,16.78);
    cout << "★★★★★★★★★ ★★★★★★\n";//三天三夜的三更半夜全身只剩汗水

	char szKey[] = "三天三夜的三更半夜 全身只剩汗水";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}
void lucky()
{
	cout << con::clr;
	mciSendString("close little lucky.mp3" , NULL, 0, 0);
	mciSendString("open little lucky.mp3" , NULL, 0, 0);
	mciSendString("play little lucky.mp3" , NULL, 0, 0); 
	startSong = clock(); //記錄歌曲開始時刻
	
	 startSong = clock(); //記錄歌曲開始時刻
    
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：小幸運\n";
    waiting(0,03.00);
    cout << "詞：徐世珍、吳輝福　曲：Jerry C\n";
    waiting(0,05.00);
    cout << "演唱：田馥甄\n";
    waiting(0,15.11);
    cout << "我聽見雨滴 落在青青草地\n";
    waiting(0,21.22);
    cout << "我聽見遠方 下課鐘聲響起\n";
    waiting(0,27.28);
    cout << "可是我沒有聽見\n";
    waiting(0,29.97);
    cout << "你的聲音認真呼喚我姓名\n";
    waiting(0,39.42);
    cout << "愛上你的時候 還不懂感情\n";
    waiting(0,45.41);
    cout << "離別了 才覺得刻骨銘心\n";
    waiting(0,51.51);
    cout << "為什麼沒有發現\n";
    waiting(0,54.26);
    cout << "遇見了你是生命最好的事情\n";
    waiting(1,01.80);
    cout << "也許當時\n";
    waiting(1,03.31);
    cout << "忙著微笑和哭泣\n";
    waiting(1,07.91);
    cout << "忙著追逐天空中的流星\n";
    waiting(1,13.58);
    cout << "人理所當然的忘記是誰\n";
    waiting(1,19.32);
    cout << "風裡 雨裡 一直默默守護在原地\n";
    waiting(1,25.73);
    cout << "原來你是 我最想留住的幸運\n";
    waiting(1,30.95);
    cout << "原來我們 和愛情曾經靠得那麼近\n";
    waiting(1,37.03);
    cout << "那為我對抗世界的決定 那陪我淋的雨\n";
    waiting(1,44.70);
    cout << "一幕幕都是你 一塵不染的真心\n";
    waiting(1,52.02);
    cout << "與你相遇 好幸運\n";
    waiting(1,55.28);
    cout << "可我也失去 為你淚流滿面的權利\n";
    waiting(02,01.34);
    cout << "★★★★★★★★★★\n";//但願在我看不到的天際
    
    char szKey[] = "但願在我看不到的天際";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}
void sad()
{
	cout << con::clr;
	mciSendString("close i am sad.mp3" , NULL, 0, 0);
	mciSendString("open i am sad.mp3" , NULL, 0, 0);
	mciSendString("play i am sad.mp3" , NULL, 0, 0); 

    startSong = clock(); //記錄歌曲開始時刻
    
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：我難過\n";
    waiting(0,03.00);
    cout << "詞：陳信榮　曲：周傳雄　編：周傳雄•吳俊毅\n";
    waiting(0,05.00);
    cout << "歌手：5566\n";
    waiting(0,07.00);
    cout << "專輯：First Album\n";
    waiting(0,09.00);
    cout << "發行日：2002 年 12 月 11 日\n";
    waiting(0,19.86);
    cout << "那一年默默無言只能選擇離開\n";
    waiting(0,26.81);
    cout << "無邪的笑容已經不再精彩\n";
    waiting(0,33.85);
    cout << "你害怕結局所以拚命傷害\n";
    waiting(0,40.86);
    cout << "說是我擋住你的美好未來\n";
    waiting(0,46.64);
    cout << "你堅決　不希望我等待\n";
    waiting(0,50.53);
    cout << "我便默默的讓你走開\n";
    waiting(0,53.65);
    cout << "如今你　受了傷回來\n";
    waiting(0,57.54);
    cout << "叫我如何接受這安排\n";
    waiting(1,04.01);
    cout << "我難過的是放棄你放棄愛放棄的夢被打碎　忍住悲哀\n";
    waiting(1,11.40);
    cout << "我以為　是成全　你卻說你更不愉快\n";
    waiting(1,17.95);
    cout << "★★★★★★★★★★★\n";//我難過的是忘了你忘了愛
   
	char szKey[] = "我難過的是忘了你忘了愛";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}
void dora()
{
	cout << con::clr;
	mciSendString("close dora a mon.mp3" , NULL, 0, 0);
	mciSendString("open dora a mon.mp3" , NULL, 0, 0);
	mciSendString("play dora a mon.mp3" , NULL, 0, 0); 
	startSong = clock(); //記錄歌曲開始時刻
 
    startSong = clock(); //記錄歌曲開始時刻
    
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：小叮噹\n";
    waiting(0,05.00);
    cout << "歌手：范曉萱\n";
    waiting(0,17.00);
    cout << "如果我有仙女棒 變大變小變漂亮\n";
    waiting(0,21.00);
    cout << "還要變個都是漫畫 巧克力和玩具的家\n";
    waiting(0,27.00);
    cout << "如果我00有機器貓 我要叫他小叮噹\n";
    waiting(0,31.00);
    cout << "竹蜻蜓和時光隧道 能去任何的地方\n";
    waiting(0,36.00);
    cout << "讓小孩 大人 壞人 都變成好人\n";
    waiting(0,41.00);
    cout << "(嗨大家好 我是小叮噹)\n";
    waiting(0,45.00);
    cout << "★★★ ★★★★★★★★★★★★\n";//ㄤㄤㄤ小叮噹幫我實現所有的願望
   
    char szKey[] = "ㄤㄤㄤ 小叮噹幫我實現所有的願望";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}

void definitely()
{
	cout << con::clr;
	mciSendString("close definetely love.mp3" , NULL, 0, 0);
	mciSendString("open definetely love.mp3" , NULL, 0, 0);
	mciSendString("play definetely love.mp3" , NULL, 0, 0); 

    startSong = clock(); //記錄歌曲開始時刻
    
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：癡心絕對\n";
    waiting(0,03.00);
    cout << "詞曲：蔡伯南\n";
    waiting(0,05.00);
    cout << "演唱：李聖傑\n";
    waiting(0,09.00);
    cout << "專輯：絕對癡心．手放開\n";
    waiting(0,11.00);
    cout << "發行日：2004 年 11 月 26 日\n";
    waiting(0,17.83);
    cout << "想用一杯Latte把妳灌醉\n";
    waiting(0,22.25);
    cout << "好讓妳能多愛我一點\n";
    waiting(0,26.74);
    cout << "暗戀的滋味　妳不懂這種感覺\n";
    waiting(0,31.49);
    cout << "早有人陪的妳永遠不會\n";
    waiting(0,37.91);
    cout << "看見妳和他在我面前\n";
    waiting(0,42.37);
    cout << "證明我的愛只是愚昧\n";
    waiting(0,46.83);
    cout << "妳不懂我的　那些憔悴\n";
    waiting(0,51.39);
    cout << "是妳永遠不曾過的體會\n";
    waiting(0,58.04);
    cout << "為妳付出那種傷心妳永遠不瞭解\n";
    waiting(1,02.57);
    cout << "★★★★★★★★★★★★★★\n";//我又何苦勉強自己愛上妳的一切

   
	char szKey[] = "我又何苦勉強自己愛上妳的一切";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}
void starrain()
{
	cout << con::clr;
	mciSendString("close star rain.mp3" , NULL, 0, 0);
	mciSendString("open star rain.mp3" , NULL, 0, 0);
	mciSendString("play star rain.mp3" , NULL, 0, 0); 
	startSong = clock(); //記錄歌曲開始時刻
 
    startSong = clock(); //記錄歌曲開始時刻
    
    waiting(0,01.00); //輸入累計時間（分，秒）
    cout << "歌名：流星雨\n";
    waiting(0,03.00);
    cout << "作詞：鄔裕康　作曲：平井堅\n";
    waiting(0,05.00);
    cout << "歌手：F4\n";
    waiting(0,07.00);
    cout << "專輯：流星花園主題曲\n";
    waiting(0,09.00);
    cout << "發行日：2001 年\n";
    waiting(0,25.00);
    cout << "[周渝民]：溫柔的星空　應該讓你感動\n";
    waiting(0,31.18);
    cout << "[周渝民]：我在你身後　為你佈置一片天空\n";
    waiting(0,38.00);
    cout << "[言承旭]：不准你難過　替你擺平寂寞　\n";
    waiting(0,45.04);
    cout << "[言承旭]夢想的重量　全部都交給我\n";
    waiting(0,52.00);
    cout << "[吳建豪]：牽你手　跟著我走　風再大又怎樣　\n";
    waiting(1,01.68);
    cout << "[吳建豪]你有了我　再也不會迷路方向\n";
    waiting(1,07.00);
    cout << "[全　體]：陪你去看流星雨落在這地球上　讓你的淚落在我肩膀\n";
    waiting(1,14.35);
    cout << "要你相信我的愛只肯為你勇敢\n";
    waiting(1,21.00);
    cout << "★★★★★★★★★\n";//你會看見幸福的所在

    char szKey[] = "你會看見幸福的所在";
	char szInput[80];
	printf ("請輸入您的解答?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("您真棒!");
	}
	else
	{
		cout << "錯！" << endl;
		cout << "正解:" <<  szKey << endl <<endl;
	}	
}

void print_millionstar()//百萬大歌星title 
{
	cout << con::bg_black << setw( 4 ) << " " << endl;
    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊▊▊ ▊▊▊▊▊      ▊    ▊▊▊▊ ▊     ▊▊▊▊▊     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  ▊         ▊        ▊▊▊▊▊     ▊  ▊▊▊ ▊  ★  ▊     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊▊▊  ▊▊▊▊       ▊      ★ ▊  ▊  ▊ ▊▊▊▊▊     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊      ▊ ▊     ▊      ▊▊        ▊    ▊    ▊            " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊      ▊▊      ▊     ▊  ▊  ▊▊▊▊  ▊▊  ▊▊▊▊▊     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊▊▊        ▊    ▊    ▊      ▊  ▊  ▊     ▊         " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊      ▊        ▊   ▊      ▊  ★ ▊ ▊    ▊  ▊▊▊       " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊      ▊        ▊  ▊        ▊    ▊▊      ▊   ▊         " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊▊▊  ▊▊▊▊ ▊          ▊ ▊▊▊       ▊▊▊▊▊     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_white  << setw( 70 ) << "--------------THE       MILLION        STAR ---------------     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl; 
}
void print_menu() //歌曲類別選單 
{
		cout << con::bg_black << setw( 4 ) << " " << endl;     
    	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "�歈�������������������" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "��  1. KTV排行榜    ��" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "�裺�������������������" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;   
    	cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "�歈�����������������" << endl ;
		cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��  2. 經典神曲   ��" << endl ;
		cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "�裺�����������������" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;  
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�歈�������������������" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. 工具人之歌   ��" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�裺�������������������" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;  
    	cout << con::bg_black << setw( 26 ) << " ";     
		cout << con::bg_black << con::fg_white << "請輸入您要選的歌曲類別:";
}
void playgame()
{
    int game_order = 0;
    int song = 0;
    char playmode = 0;
	cout << con::clr;
     
	print_millionstar();
    cout << con::bg_black << setw( 4 ) << " " << endl;     
    cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "�歈�����������������" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "��  1. 開始遊戲   ��" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "�裺�����������������" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;   
    cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "�歈�����������������" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��  2. 遊戲介紹   ��" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "�裺�����������������" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;  
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�歈�����������������" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. 結束遊戲   ��" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�裺�����������������" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;  
    cout << con::bg_black << setw( 27 ) << " ";     
	cout << con::bg_black << con::fg_white << "請輸入您目前要進行的選項:";
	cin >> game_order;
	
	if(game_order == 1)
	{
		cout << con::clr;
    	print_millionstar();
	 	print_menu();
		int menu = 0;
		cin >> menu;
		if(menu == 1)
		{
			cout << con::clr;
		    cout << con::bg_black << setw( 4 ) << " " << endl;
		    cout << con::bg_black << setw( 2 ) << " "<< con::bg_blue << setw( 75 ) << "     " << endl;
		    cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊    ▊ ▊▊▊▊ ▊      ▊   ▊    ▊ ▊  ▊▊          ▊      ▊     " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊   ▊     ▊    ▊      ▊ ▊▊▊  ▊ ▊       ▊▊▊   ▊   ▊▊▊▊  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊  ▊      ▊     ▊    ▊    ▊    ▊ ▊  ▊▊        ▊▊▊  ▊  ▊   " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊ ▊       ▊     ▊    ▊    ▊  ▊▊ ▊▊ ▊  ▊▊▊   ▊   ▊▊▊▊  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊▊        ▊      ▊  ▊   ▊▊▊  ▊ ▊   ▊    ▊    ▊▊  ▊ ▊ ▊  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊ ▊       ▊      ▊  ▊     ▊  ▊▊ ▊▊ ▊    ▊  ▊ ▊ ▊  ▊      " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊  ▊      ▊       ▊▊      ▊    ▊ ▊   ▊    ▊ ▊  ▊  ▊ ▊▊▊  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊   ▊     ▊       ▊▊      ▊  ▊▊ ▊▊ ▊    ▊     ▊    ▊   ▊  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "▊    ▊    ▊        ▊     ▊▊    ▊ ▊   ▊  ▊▊     ▊   ▊  ▊▊  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << setw( 75 ) << "     " << endl;   
			
			
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red  <<con::fg_white << setw( 10 ) << "�歈���������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "�� 1. 小幸運    ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "�裺���������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "�歈���������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "�� 2.PLAY我呸   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "�裺���������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�歈�����������������������" << endl ;
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. 不為誰而做的歌   ��" << endl ;
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�裺�����������������������" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 30 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "請輸入你要選的歌曲：";
			cin >> song;
			if(song == 1)
			{
			    lucky();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
			if(song == 2)
			{
			    jolin();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
			if(song == 3)
			{
			    jj();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
		}
		if(menu == 2)
		{
			cout << con::clr;
		    cout << con::bg_black << setw( 4 ) <<" " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  ▊    ▊▊▊▊▊    ▊  ▊      ▊      ▊       ▊ ▊        " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << " ▊  ▊  ▊ ▊ ▊  ▊▊▊▊▊▊ ▊▊▊ ▊▊▊▊    ▊ ▊        " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊  ▊ ▊ ▊   ▊ ▊  ▊ ▊    ▊  ▊ ▊ ▊ ▊▊▊▊▊▊    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "   ▊    ▊ ▊ ▊  ▊▊▊▊▊▊   ▊▊ ▊▊▊▊ ▊ ▊  ▊ ▊    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  ▊    ▊▊▊▊▊ ▊ ▊  ▊ ▊  ▊▊▊▊ ▊ ▊ ▊▊▊▊▊▊    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊▊           ▊ ▊  ▊ ▊ ▊ ▊  ▊▊▊▊ ▊ ▊  ▊ ▊    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "   ▊    ▊▊▊▊ ▊▊▊▊▊▊▊   ▊     ▊    ▊▊▊▊▊▊    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << " ▊▊▊     ▊        ▊  ▊       ▊     ▊    ▊ ▊  ▊ ▊    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊ ▊ ▊ ▊▊▊▊    ▊    ▊      ▊     ▊    ▊▊▊▊▊▊    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;    
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "�歈���������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "��  1. 我難過   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "�裺���������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black  << setw( 10 )<< "�歈���������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "��  2. 流星雨   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "�裺���������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�歈�����������������" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. 三天三夜   ��" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�裺�����������������" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 31 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "請輸入你要選的歌曲：";
			cin >> song;
			if(song == 1)
			{
			    sad();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
			if(song == 2)
			{
			    starrain();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
			if(song == 3)
			{
			    amei();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
		}
		if(menu == 3)
		{
			cout << con::clr;
		    cout << con::bg_black << setw( 4 ) <<" " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊▊▊ ▊▊▊▊▊      ▊         ▊     ▊▊▊▊▊ ▊        " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ▊     ▊  ▊  ▊      ▊     ▊▊▊▊▊       ▊   ▊▊▊▊  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ▊     ▊  ▊  ▊      ▊            ▊     ★ ▊   ▊    ▊  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ▊     ▊  ▊  ▊     ▊▊          ▊         ▊      ▊     " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ▊     ▊  ▊  ▊    ▊  ▊        ▊    ▊▊▊▊▊   ▊      " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ▊     ▊  ▊  ▊   ▊    ▊      ▊           ▊    ▊▊     " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ▊   ▊▊▊▊▊▊▊▊      ▊    ▊         ★ ▊   ▊  ▊    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ▊      ▊    ▊  ▊        ▊  ▊             ▊  ▊    ▊   " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "▊▊▊▊▊ ▊      ▊▊          ▊▊▊▊▊▊  ▊▊▊ ▊      ▊  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;   
			
			
			
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red  <<con::fg_white << setw( 10 ) << "�歈���������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "��  1. 小叮噹   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "�裺���������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "�歈���������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "��  2. 垃圾車   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "�裺���������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�歈�����������������" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. 痴心絕對   ��" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "�裺�����������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl; 
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "�歈�������������" << endl ;
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "��  4. 男傭   ��" << endl ;
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "�裺�������������" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 31 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "請輸入你要選的歌曲：";
			cin >> song;
			if(song == 1)
			{
			    dora();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
			if(song == 2)
			{
			    trash();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
			if(song == 3)
			{
			    definitely();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
			if(song == 4)
			{
			    male();
				cout << con::fg_red << "要再玩一次嗎?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "感謝您!";
					return;
				
			}
		
		}
	}
	if(game_order == 2)
	{
		cout << con::clr;
    	print_millionstar();
		//還沒打完 
	}
	if(game_order==3)
	{
		cout << endl ;
		cout << con::bg_black << setw( 26 ) << " " << "確定要離開遊戲嗎?(N/Y)";
		char exit = 0;
		cin >> exit;
		if (exit == 'N')
		{
			//還沒打完 
		}
		if(exit == 'Y')
		{
			cout << con::clr;
			cout << "感謝您!";
			return;
		}
	}
        
	return;
}
void waiting(int mins, double secs)
{
    clock_t startLrc=clock();//閮����甇�閰����憪�������
    secs += mins*60;
    clock_t accuTime=secs * CLOCKS_PER_SEC; //蝝航�����������蝞�瘥怎��
    clock_t delay = accuTime + startSong - startLrc;//���蝞���拙�仿�����
    while (clock()-startLrc < delay)//wait until time elapses
    ;//note the semicolon
  
}

