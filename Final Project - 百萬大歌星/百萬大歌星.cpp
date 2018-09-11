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
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "           ¢o          ¢o¢o¢o¢o        ¢o           " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o  ¢o¢o¢o¢o¢o      ¢o   ¢o   ¢o¢o¢o¢o¢o¢o¢o     " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o    ¢o  ¢o  ¢o          ¢o           " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o¢o¢o¢o ¢o  ¢o  ¢o¢o¢o¢o¢o¢o¢o¢o ¢o¢o¢o¢o¢o¢o      " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o    ¢o  ¢o     ¢o  ¢o   ¡¹   ¢o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o    ¢o  ¢o¢o  ¢o   ¢o¢o¢o¢o¢o¢o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o  ¢o¢o¢o¢o ¢o¢o         ¢o           " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o        ¢o  ¢o¢o   ¢o¢o¢o¢o¢o¢o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o¢o¢o¢o¢o¢o¢o¢o¢o     ¢o ¢o  ¢o       ¢o           " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùÝùùùùùùùùùùùùùß" << "ùÝùùùùùùùùùùùùùùùß" <<"ùÝùùùùùùùùùùùùùùùß" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùø 1. ¤T¿ï¤@  ùø" << "ùø 2. ¤@¦r´£¥Ü  ùø" <<"ùø 3. call out  ùø" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùãùùùùùùùùùùùùùå" << "ùãùùùùùùùùùùùùùùùå" <<"ùãùùùùùùùùùùùùùùùå" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   

	mciSendString("close trash.mp3" , NULL, 0, 0);
	mciSendString("open trash.mp3" , NULL, 0, 0);
	mciSendString("play trash.mp3" , NULL, 0, 0); 
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è

    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << setw( 30 )<<" " << "ºq¦W¡G©U§£¨®\n";
    waiting(0,03.00);
    cout << setw( 30 )<<" " << "µü¦±¡Gªü«H¡@½s¡G¤­¤ë¤Ñ\n";
    waiting(0,05.00);
    cout << setw( 30 )<<" " << "ºt°Û¡G¤­¤ë¤Ñ\n";
    waiting(0,07.00);
    cout << setw( 30 )<<" " << "±M¿è¦WºÙ¡G¯«ªº«Ä¤l³£¦b¸õ»R\n";
    waiting(0,09.00);
    cout << setw( 30 )<<" " << "µo¦æ¤é¡G2004 ¦~ 11 ¤ë 5 ¤é\n";
    waiting(0,30.97);
    cout << setw( 30 )<<" " << "ÁöµM§AµÊ®ðÃa¡A¹ï«ÝªB¤Í¤S®t\n";
    waiting(0,35.36);
    cout << setw( 30 )<<" " << "¥Yºl¤S§ó·R²o©ì\n";
    waiting(0,39.79);
    cout << setw( 30 )<<" " << "¨Î¦b§A¹J¨ì§Ú¡A¤£·R­p¸ûªº§Ú\n";
    waiting(0,44.18);
    cout << setw( 30 )<<" " << "ºâ§AÃa¤H¦³¦n©R\n";
    waiting(0,48.63);
    cout << setw( 30 )<<" " << "§Ú¨«¸ô§A§¤¨®¡A§A¦Y¶º§Ú¬~¸J\n";
    waiting(0,53.04);
    cout << setw( 30 )<<" " << "§A³Q´Û­t§Ú©é©R\n";
    waiting(0,57.47);
    cout << setw( 30 )<<" " << "­Y¬°¤F²n¨ì§A¡A¥i¥HÁ}­W¨ì§Ú\n";
    waiting(1,01.68);
    cout << setw( 30 )<<" " << "¦]¬°¡A«¥½t¤À¤£¥i´²\n";
    waiting(1,05.75);
    cout << setw( 30 )<<" " << "¦³§A¡A§Ú¤~¥¼©t³æ\n";
    waiting(1,09.35);
    cout << setw( 30 )<<" " << "¦³§Aªº³­¦ñ¡A§Ú¤~¦³¾a¤s\n";
    waiting(1,13.85);
    cout << setw( 30 )<<" " << "§A­Y¤£²n¡A§Ú¬O§Aªº©U§£¨®\n";
    waiting(1,19.32);
    cout << setw( 30 )<<" " << "¡¹¡¹¡¹¡¹¡¹¡¹¡¹\n";
	char szKey[] = "¨C¤ÑÅ¥§Aªº¤ßÁn";
	char szInput[80];
	cout << setw( 30 )<<" "; 
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		cout << setw( 30 )<<" " << "±z¯u´Î!";
	}
	else
	{
		cout << setw( 30 )<<" " << "¿ù¡I" << endl;
		cout << setw( 30 )<<" " << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void jj()
{
	cout << con::clr;
	cout << con::bg_black << setw( 4 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " "<< con::bg_blue << setw(60 ) << "     " << endl;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "           ¢o          ¢o¢o¢o¢o        ¢o           " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o  ¢o¢o¢o¢o¢o      ¢o   ¢o   ¢o¢o¢o¢o¢o¢o¢o     " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o    ¢o  ¢o  ¢o          ¢o           " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o¢o¢o¢o ¢o  ¢o  ¢o¢o¢o¢o¢o¢o¢o¢o ¢o¢o¢o¢o¢o¢o      " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o    ¢o  ¢o     ¢o  ¢o   ¡¹   ¢o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o    ¢o  ¢o¢o  ¢o   ¢o¢o¢o¢o¢o¢o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o  ¢o¢o¢o¢o ¢o¢o         ¢o           " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   ¢o    ¢o  ¢o        ¢o  ¢o¢o   ¢o¢o¢o¢o¢o¢o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o¢o¢o¢o¢o¢o¢o¢o¢o     ¢o ¢o  ¢o       ¢o           " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùÝùùùùùùùùùùùùùß" << "ùÝùùùùùùùùùùùùùùùß" <<"ùÝùùùùùùùùùùùùùùùß" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùø 1. ¤T¿ï¤@  ùø" << "ùø 2. ¤@¦r´£¥Ü  ùø" <<"ùø 3. call out  ùø" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùãùùùùùùùùùùùùùå" << "ùãùùùùùùùùùùùùùùùå" <<"ùãùùùùùùùùùùùùùùùå" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   
	mciSendString("close not for who song.mp3" , NULL, 0, 0);
	mciSendString("open not for who song.mp3" , NULL, 0, 0);
	mciSendString("play not for who song.mp3" , NULL, 0, 0); 
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
	
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è

    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡G¤£¬°½Ö¦Ó§@ªººq\n";
    waiting(0,05.00);
    cout << "ºt°Û¡GªL«T³Ç\n";
    waiting(0,07.00);
    cout << "µü:ªL¬îÂ÷ ¦±:ªL«T³Ç\n";
    waiting(0,09.00);
    cout << "±M¿è¦WºÙ¡G©M¦Û¤v¹ï¸Ü\n";
    waiting(0,27.03);
    cout << "­ì½Ì§Ú³o¤@­º ¤£¬°½Ö¦Ó§@ªººq\n";
    waiting(0,33.79);
    cout << "·PÄ±¤W§Ï©»µ¡¥~ªº©]¦â\n";
    waiting(0,40.31);
    cout << "´¿¸g¦³¨º¤@¨è ¦^ÀY³ºµM»{¤£±o\n";
    waiting(0,47.38);
    cout << "»Ý­n ±q°O¾Ð¦AºN¯Á ªº¤H\n";
    waiting(0,54.25);
    cout << "©M¥L­ÌÃö¤ßªº ªº¦a¤è\n";
    waiting(1,00.78);
    cout << "©M¨º¨Ç¨«¹Lªº ½Ðµ¥¤@µ¥\n";
    waiting(1,10.13);
    cout << "¹Ú¬°§V¤O¼å¤F¤ô ·R¦b­I«á©¹«e±À\n";
    waiting(1,16.67);
    cout << "·í§Ú©ï°_ÀY¤~µoÄ± §Ú¬O¤£¬O§Ñ¤F½Ö\n";
    waiting(1,23.35);
    cout << "²Ö¨ì¾ã©]¤£¯àºÎ ©]¦â­þ¸Ì³£¬O¬ü\n";
    waiting(1,29.99);
    cout << "¡¹¡¹¡¹¡¹¡¹ ¡¹ ¡¹¡¹ ¡¹¡¹ ¡¹¡¹ ¡¹¡¹ ¡¹¡¹¡¹\n";//¤@©w¦³­Ó¤H ¥L ¸ú¹L Á×¹L °{¹L ¿f¹L ¥L¬O½Ö
    char szKey[] = "¤@©w¦³­Ó¤H ¥L ¸ú¹L Á×¹L °{¹L ¿f¹L ¥L¬O½Ö";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void jolin()
{
	cout << con::clr;
	cout << con::bg_black << setw( 4 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " "<< con::bg_blue << setw(60 ) << "     " << endl;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) <<  "¢o¢o¢o ¢o     ¢o¢o¢o ¢o  ¢o ¢o             " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) <<  "¢o  ¢o ¢o     ¢o  ¢o ¢o  ¢o ¢o             " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o  ¢o ¢o     ¢o  ¢o ¢o  ¢o ¢o             " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o  ¢o ¢o     ¢o¢o¢o ¢o  ¢o ¢o             " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o¢o¢o ¢o     ¢o  ¢o ¢o¢o¢o ¢o             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o     ¢o     ¢o  ¢o   ¢o   ¢o             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o     ¢o     ¢o  ¢o   ¢o   ¢o             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o     ¢o     ¢o  ¢o   ¢o                  " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "¢o     ¢o¢o¢o ¢o  ¢o   ¢o   ¢o             " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùÝùùùùùùùùùùùùùß" << "ùÝùùùùùùùùùùùùùùùß" <<"ùÝùùùùùùùùùùùùùùùß" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùø 1. ¤T¿ï¤@  ùø" << "ùø 2. ¤@¦r´£¥Ü  ùø" <<"ùø 3. call out  ùø" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "ùãùùùùùùùùùùùùùå" << "ùãùùùùùùùùùùùùùùùå" <<"ùãùùùùùùùùùùùùùùùå" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   
	mciSendString("close play.mp3" , NULL, 0, 0);
	mciSendString("open play.mp3" , NULL, 0, 0);
	mciSendString("play play.mp3" , NULL, 0, 0); 

     startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
    
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡GPLAY §Ú©A\n";
    waiting(0,03.00);
    cout << "§@µü¡G§õ®æ§Ì §@¦±¡G­Ù¤l©£\n";
    waiting(0,05.00);
    cout << "ºt°Û¡G½²¨ÌªL\n";
    waiting(0,18.98);
    cout << "¥b©]¤@ÂIªº\n";
    waiting(0,19.76);
    cout << "µL¨¸®ö¿ººÎ¦ç©j©f\n";
    waiting(0,21.36);
    cout << "²M±á¤­ÂIªº\n";
    waiting(0,22.00);
    cout << "¸U¤Hµn¤sÅé¾Þ¤j·|\n";
    waiting(0,23.66);
    cout << "¤»¹s¦~¥N¼Ú¬w«e½Ã\n";
    waiting(0,24.80);
    cout << "¦a¤U¾Éºt°Q½×·|\n";
    waiting(0,26.12);
    cout << "¤E¹s¦~¥N°¸¹³´_¥X\n";
    waiting(0,27.17);
    cout << "Ã±¦W´¤¤â¾Ö©ê·|\n";
    waiting(0,28.50);
    cout << "¹s¤U¤­¤Q«×¥_·¥±´ÀI\n";
    waiting(0,29.96);
    cout << "¬°´Á¤Q´X¤Ñ\n";
    waiting(0,30.91);
    cout << "¼»«¢©Ô»Å¼ö\n";
    waiting(0,31.74);
    cout << "µ´¹ï±Y¼ì¥Í¦s¦ÒÅç\n";
    waiting(0,33.31);
    cout << "¤T¤Ñ¨â©]¶°ÅéKºq\n";
    waiting(0,34.44);
    cout << "·²´µ©³¨½ªº«Å¬ª\n";
    waiting(0,35.64);
    cout << "ªÚ­»ºëªo²`«×©ñÃP\n";
    waiting(0,37.30);
    cout << "µL·NÃÑ¶Ê¯v\n";
    waiting(0,38.13);
    cout << "¤åÃÀ¸Ë¹G\n";
    waiting(0,38.68);
    cout << "¶Ã¥@²±¸Ë¬£¹ï\n";
    waiting(0,40.45);
    cout << "¤k¯«Â×¨ÅªÎÁv\n";
    waiting(0,41.40);
    cout << "¤EÀY¨­§÷\n";
    waiting(0,42.82);
    cout << "¨k¯«Ås¤}®góç\n";
    waiting(0,43.75);
    cout << "¤»¶ô¦Ù±Æ\n";
    waiting(0,45.27);
    cout << "¤ñ¿ú§ó­«­nªº¬O\n";
    waiting(0,46.41);
    cout << "¤H³½½u\n";
    waiting(0,47.27);
    cout << "ºÞ§A¤p²³¤j²³\n";
    waiting(0,48.84);
    cout << "§Ú©A\n";
    waiting(0,49.69);
    cout << "ºÞ§A¬O¤p²M·s¬O­«¤f¨ý\n";
    waiting(0,51.29);
    cout << "§Ú©A\n";
    waiting(0,52.16);
    cout << "¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹\n";//ºÞ§A¬O­þ¤@Ãþ¥ÒÂÎ
	char szKey[] = "ºÞ§A¬O­þ¤@Ãþ¥ÒÂÎ";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void male()
{
	cout << con::clr;
	mciSendString("close male domestic.mp3" , NULL, 0, 0);
	mciSendString("open male domestic.mp3" , NULL, 0, 0);
	mciSendString("play male domestic.mp3" , NULL, 0, 0); 
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
 
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡G¨k¶Ä\n";
    waiting(0,03.00);
    cout << "µü¦±¡G§d§J¸s\n";
    waiting(0,05.00);
    cout << "ºq¤â¡G§d§J¸s\n";
    waiting(0,07.00);
    cout << "±M¿è¡G±N­x¥O\n";
    waiting(0,09.00);
    cout << "µo¦æ¤é¡G2006 ¦~ 10 ¤ë 13 ¤é\n";
    waiting(0,18.41);
    cout << "Áú¼@¡@¬Ý¤Ó¦h¡@§A³Ì·R³¥ÆZ¤k¤Í\n";
    waiting(0,23.11);
    cout << "¤Ú´x¡@¤Ú¤£°÷¡@¬¡¸Ó­Ë·°ªº¬O§Ú\n";
    waiting(0,27.76);
    cout << "©È§A­ú©È§A²\¬y¡@©È¨ìªB¤Í³è±ó§Ú\n";
    waiting(0,32.77);
    cout << "§Ú¥u¬O§Aªº¨k¶Ä\n";
    waiting(0,37.15);
    cout << "¸ô¤W¡@¨®¤Ó¦h¡@¥q¾÷¦Ñ§d¨Ó±µ°e\n";
    waiting(0,41.82);
    cout << "°·¨­¡@°·¤£°÷¡@ÁÙ­nÀ´¤@ÂI«ÕÀq\n";
    waiting(0,46.56);
    cout << "µN¶º¿Nµæ§A¤£À´¡@¬~¦çÀ¿¦aªº²Ê¬¡\n";
    waiting(0,51.48);
    cout << "¥þ³¡³£¥Ñ§Ú¨Ó°µ\n";
    waiting(0,55.60);
    cout << "¤£ºÞ§A¯¸µÛ§¤µÛ­wµÛ§Ú¦b§A¥ª¥k\n";
    waiting(1,00.25);
    cout << "¦pªG§A²Ö¤F»Ä¤FÅõ¤F§ÚÀ°§A«ö¼¯\n";
    waiting(1,04.94);
    cout << "¡¹¡¹¡¹¡¹¡¹¡¹ ¡¹¡¹¡¹¡¹¡¹¡¹\n";//§Ú°µ§Aªº¨k¶Ä¡@¤@¤Ñ¨ì±ß¤W¤u
    char szKey[] = "§Ú°µ§Aªº¨k¶Ä¡@¤@¤Ñ¨ì±ß¤W¤u";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void amei()
{
	cout << con::clr;
	mciSendString("close three days.mp3" , NULL, 0, 0);
	mciSendString("open three days.mp3" , NULL, 0, 0);
	mciSendString("play three days.mp3" , NULL, 0, 0); 
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è

    startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
    
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡G¤T¤Ñ¤T©]\n";
    waiting(0,03.00);
    cout << "ºq¤â¡G±i´f©f\n";
    waiting(0,09.73);
    cout << "Ba Ba Ba Ba . . .\n";
    waiting(0,23.37);
    cout << "¤@ÂI³£¤£·|²Ö §Ú¤w¸g¸õ¤F¤T¤Ñ¤T©]\n";
    waiting(0,30.12);
    cout << "§Ú²{¦bªº¤ß±¡³Ü¨T¤ô¤]·|¾KOh Oh Oh\n";
    waiting(0,36.09);
    cout << "§¹¥þ³£¤£·|¯h­Â §ÚÁÙ­n¦A¸õ¤T¤Ñ¤T©]\n";
    waiting(0,42.48);
    cout << "§Ú²{¦bªº¤ß±¡»´±o¦n¹³¥i¥H­¸ Oh Oh Oh\n";
    waiting(0,48.78);
    cout << "OK OK ¥[¤J§Úªº¦æ¦C\n";
    waiting(0,51.78);
    cout << "NoK NoK ¥Õ¤Ñ¸õ¨ì¶Â©]\n";
    waiting(0,55.10);
    cout << "Always Always §Ö¼Ö¤£·|¦YÁ«\n";
    waiting(0,58.10);
    cout << "No Way No Way ½Ö¤]§O·Q©Úµ´ yeah\n";
    waiting(1,04.34);
    cout << "¤T¤Ñ¤T©]ªº¤T§ó¥b©] ¸õ»R¤£­n°±·²\n";
    waiting(1,10.44);
    cout << "¤T¤Ñ¤T©]ªº¤T§ó¥b©] ÄÆ¯B¥u¾a­µ¼Ö\n";
    waiting(1,16.78);
    cout << "¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹ ¡¹¡¹¡¹¡¹¡¹¡¹\n";//¤T¤Ñ¤T©]ªº¤T§ó¥b©]¥þ¨­¥u³Ñ¦½¤ô

	char szKey[] = "¤T¤Ñ¤T©]ªº¤T§ó¥b©] ¥þ¨­¥u³Ñ¦½¤ô";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void lucky()
{
	cout << con::clr;
	mciSendString("close little lucky.mp3" , NULL, 0, 0);
	mciSendString("open little lucky.mp3" , NULL, 0, 0);
	mciSendString("play little lucky.mp3" , NULL, 0, 0); 
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
	
	 startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
    
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡G¤p©¯¹B\n";
    waiting(0,03.00);
    cout << "µü¡G®}¥@¬Ã¡B§d½÷ºÖ¡@¦±¡GJerry C\n";
    waiting(0,05.00);
    cout << "ºt°Û¡G¥ÐÃLºÂ\n";
    waiting(0,15.11);
    cout << "§ÚÅ¥¨£«Bºw ¸¨¦b«C«C¯ó¦a\n";
    waiting(0,21.22);
    cout << "§ÚÅ¥¨£»·¤è ¤U½ÒÄÁÁnÅT°_\n";
    waiting(0,27.28);
    cout << "¥i¬O§Ú¨S¦³Å¥¨£\n";
    waiting(0,29.97);
    cout << "§AªºÁn­µ»{¯u©I³ê§Ú©m¦W\n";
    waiting(0,39.42);
    cout << "·R¤W§Aªº®É­Ô ÁÙ¤£À´·P±¡\n";
    waiting(0,45.41);
    cout << "Â÷§O¤F ¤~Ä±±o¨è°©»Ê¤ß\n";
    waiting(0,51.51);
    cout << "¬°¤°»ò¨S¦³µo²{\n";
    waiting(0,54.26);
    cout << "¹J¨£¤F§A¬O¥Í©R³Ì¦nªº¨Æ±¡\n";
    waiting(1,01.80);
    cout << "¤]³\·í®É\n";
    waiting(1,03.31);
    cout << "¦£µÛ·L¯º©M­úª_\n";
    waiting(1,07.91);
    cout << "¦£µÛ°l³v¤ÑªÅ¤¤ªº¬y¬P\n";
    waiting(1,13.58);
    cout << "¤H²z©Ò·íµMªº§Ñ°O¬O½Ö\n";
    waiting(1,19.32);
    cout << "­·¸Ì «B¸Ì ¤@ª½ÀqÀq¦uÅ@¦b­ì¦a\n";
    waiting(1,25.73);
    cout << "­ì¨Ó§A¬O §Ú³Ì·Q¯d¦íªº©¯¹B\n";
    waiting(1,30.95);
    cout << "­ì¨Ó§Ú­Ì ©M·R±¡´¿¸g¾a±o¨º»òªñ\n";
    waiting(1,37.03);
    cout << "¨º¬°§Ú¹ï§Ü¥@¬Éªº¨M©w ¨º³­§Ú²Oªº«B\n";
    waiting(1,44.70);
    cout << "¤@¹õ¹õ³£¬O§A ¤@¹Ð¤£¬Vªº¯u¤ß\n";
    waiting(1,52.02);
    cout << "»P§A¬Û¹J ¦n©¯¹B\n";
    waiting(1,55.28);
    cout << "¥i§Ú¤]¥¢¥h ¬°§A²\¬yº¡­±ªºÅv§Q\n";
    waiting(02,01.34);
    cout << "¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹\n";//¦ýÄ@¦b§Ú¬Ý¤£¨ìªº¤Ñ»Ú
    
    char szKey[] = "¦ýÄ@¦b§Ú¬Ý¤£¨ìªº¤Ñ»Ú";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void sad()
{
	cout << con::clr;
	mciSendString("close i am sad.mp3" , NULL, 0, 0);
	mciSendString("open i am sad.mp3" , NULL, 0, 0);
	mciSendString("play i am sad.mp3" , NULL, 0, 0); 

    startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
    
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡G§ÚÃø¹L\n";
    waiting(0,03.00);
    cout << "µü¡G³¯«Hºa¡@¦±¡G©P¶Ç¶¯¡@½s¡G©P¶Ç¶¯¡E§d«T¼Ý\n";
    waiting(0,05.00);
    cout << "ºq¤â¡G5566\n";
    waiting(0,07.00);
    cout << "±M¿è¡GFirst Album\n";
    waiting(0,09.00);
    cout << "µo¦æ¤é¡G2002 ¦~ 12 ¤ë 11 ¤é\n";
    waiting(0,19.86);
    cout << "¨º¤@¦~ÀqÀqµL¨¥¥u¯à¿ï¾ÜÂ÷¶}\n";
    waiting(0,26.81);
    cout << "µL¨¸ªº¯º®e¤w¸g¤£¦Aºë±m\n";
    waiting(0,33.85);
    cout << "§A®`©Èµ²§½©Ò¥H©é©R¶Ë®`\n";
    waiting(0,40.86);
    cout << "»¡¬O§Ú¾×¦í§Aªº¬ü¦n¥¼¨Ó\n";
    waiting(0,46.64);
    cout << "§A°í¨M¡@¤£§Æ±æ§Úµ¥«Ý\n";
    waiting(0,50.53);
    cout << "§Ú«KÀqÀqªºÅý§A¨«¶}\n";
    waiting(0,53.65);
    cout << "¦p¤µ§A¡@¨ü¤F¶Ë¦^¨Ó\n";
    waiting(0,57.54);
    cout << "¥s§Ú¦p¦ó±µ¨ü³o¦w±Æ\n";
    waiting(1,04.01);
    cout << "§ÚÃø¹Lªº¬O©ñ±ó§A©ñ±ó·R©ñ±óªº¹Ú³Q¥´¸H¡@§Ô¦í´d«s\n";
    waiting(1,11.40);
    cout << "§Ú¥H¬°¡@¬O¦¨¥þ¡@§A«o»¡§A§ó¤£´r§Ö\n";
    waiting(1,17.95);
    cout << "¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹\n";//§ÚÃø¹Lªº¬O§Ñ¤F§A§Ñ¤F·R
   
	char szKey[] = "§ÚÃø¹Lªº¬O§Ñ¤F§A§Ñ¤F·R";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void dora()
{
	cout << con::clr;
	mciSendString("close dora a mon.mp3" , NULL, 0, 0);
	mciSendString("open dora a mon.mp3" , NULL, 0, 0);
	mciSendString("play dora a mon.mp3" , NULL, 0, 0); 
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
 
    startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
    
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡G¤p¥m¾´\n";
    waiting(0,05.00);
    cout << "ºq¤â¡G­S¾å¸©\n";
    waiting(0,17.00);
    cout << "¦pªG§Ú¦³¥P¤k´Î ÅÜ¤jÅÜ¤pÅÜº}«G\n";
    waiting(0,21.00);
    cout << "ÁÙ­nÅÜ­Ó³£¬Oº©µe ¥©§J¤O©Mª±¨ãªº®a\n";
    waiting(0,27.00);
    cout << "¦pªG§Ú00¦³¾÷¾¹¿ß §Ú­n¥s¥L¤p¥m¾´\n";
    waiting(0,31.00);
    cout << "¦Ë»f¸»©M®É¥úÀG¹D ¯à¥h¥ô¦óªº¦a¤è\n";
    waiting(0,36.00);
    cout << "Åý¤p«Ä ¤j¤H Ãa¤H ³£ÅÜ¦¨¦n¤H\n";
    waiting(0,41.00);
    cout << "(¶Ù¤j®a¦n §Ú¬O¤p¥m¾´)\n";
    waiting(0,45.00);
    cout << "¡¹¡¹¡¹ ¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹\n";//£µ£µ£µ¤p¥m¾´À°§Ú¹ê²{©Ò¦³ªºÄ@±æ
   
    char szKey[] = "£µ£µ£µ ¤p¥m¾´À°§Ú¹ê²{©Ò¦³ªºÄ@±æ";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}

void definitely()
{
	cout << con::clr;
	mciSendString("close definetely love.mp3" , NULL, 0, 0);
	mciSendString("open definetely love.mp3" , NULL, 0, 0);
	mciSendString("play definetely love.mp3" , NULL, 0, 0); 

    startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
    
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡GÃ¨¤ßµ´¹ï\n";
    waiting(0,03.00);
    cout << "µü¦±¡G½²§B«n\n";
    waiting(0,05.00);
    cout << "ºt°Û¡G§õ¸t³Ç\n";
    waiting(0,09.00);
    cout << "±M¿è¡Gµ´¹ïÃ¨¤ß¡D¤â©ñ¶}\n";
    waiting(0,11.00);
    cout << "µo¦æ¤é¡G2004 ¦~ 11 ¤ë 26 ¤é\n";
    waiting(0,17.83);
    cout << "·Q¥Î¤@ªMLatte§â©pÄé¾K\n";
    waiting(0,22.25);
    cout << "¦nÅý©p¯à¦h·R§Ú¤@ÂI\n";
    waiting(0,26.74);
    cout << "·tÅÊªº´þ¨ý¡@©p¤£À´³oºØ·PÄ±\n";
    waiting(0,31.49);
    cout << "¦­¦³¤H³­ªº©p¥Ã»·¤£·|\n";
    waiting(0,37.91);
    cout << "¬Ý¨£©p©M¥L¦b§Ú­±«e\n";
    waiting(0,42.37);
    cout << "ÃÒ©ú§Úªº·R¥u¬O·M¬N\n";
    waiting(0,46.83);
    cout << "©p¤£À´§Úªº¡@¨º¨Ç¼¬±|\n";
    waiting(0,51.39);
    cout << "¬O©p¥Ã»·¤£´¿¹LªºÅé·|\n";
    waiting(0,58.04);
    cout << "¬°©p¥I¥X¨ººØ¶Ë¤ß©p¥Ã»·¤£ÁA¸Ñ\n";
    waiting(1,02.57);
    cout << "¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹\n";//§Ú¤S¦ó­W«j±j¦Û¤v·R¤W©pªº¤@¤Á

   
	char szKey[] = "§Ú¤S¦ó­W«j±j¦Û¤v·R¤W©pªº¤@¤Á";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}
void starrain()
{
	cout << con::clr;
	mciSendString("close star rain.mp3" , NULL, 0, 0);
	mciSendString("open star rain.mp3" , NULL, 0, 0);
	mciSendString("play star rain.mp3" , NULL, 0, 0); 
	startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
 
    startSong = clock(); //°O¿ýºq¦±¶}©l®É¨è
    
    waiting(0,01.00); //¿é¤J²Ö­p®É¶¡¡]¤À¡A¬í¡^
    cout << "ºq¦W¡G¬y¬P«B\n";
    waiting(0,03.00);
    cout << "§@µü¡Gà©¸Î±d¡@§@¦±¡G¥­¤«°í\n";
    waiting(0,05.00);
    cout << "ºq¤â¡GF4\n";
    waiting(0,07.00);
    cout << "±M¿è¡G¬y¬Pªá¶é¥DÃD¦±\n";
    waiting(0,09.00);
    cout << "µo¦æ¤é¡G2001 ¦~\n";
    waiting(0,25.00);
    cout << "[©P´ü¥Á]¡G·Å¬Xªº¬PªÅ¡@À³¸ÓÅý§A·P°Ê\n";
    waiting(0,31.18);
    cout << "[©P´ü¥Á]¡G§Ú¦b§A¨­«á¡@¬°§A§G¸m¤@¤ù¤ÑªÅ\n";
    waiting(0,38.00);
    cout << "[¨¥©Ó¦°]¡G¤£­ã§AÃø¹L¡@´À§AÂ\¥­±I¹æ¡@\n";
    waiting(0,45.04);
    cout << "[¨¥©Ó¦°]¹Ú·Qªº­«¶q¡@¥þ³¡³£¥æµ¹§Ú\n";
    waiting(0,52.00);
    cout << "[§d«Ø»¨]¡G²o§A¤â¡@¸òµÛ§Ú¨«¡@­·¦A¤j¤S«ç¼Ë¡@\n";
    waiting(1,01.68);
    cout << "[§d«Ø»¨]§A¦³¤F§Ú¡@¦A¤]¤£·|°g¸ô¤è¦V\n";
    waiting(1,07.00);
    cout << "[¥þ¡@Åé]¡G³­§A¥h¬Ý¬y¬P«B¸¨¦b³o¦a²y¤W¡@Åý§Aªº²\¸¨¦b§ÚªÓ»H\n";
    waiting(1,14.35);
    cout << "­n§A¬Û«H§Úªº·R¥uªÖ¬°§A«i´±\n";
    waiting(1,21.00);
    cout << "¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹¡¹\n";//§A·|¬Ý¨£©¯ºÖªº©Ò¦b

    char szKey[] = "§A·|¬Ý¨£©¯ºÖªº©Ò¦b";
	char szInput[80];
	printf ("½Ð¿é¤J±zªº¸Ñµª?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("±z¯u´Î!");
	}
	else
	{
		cout << "¿ù¡I" << endl;
		cout << "¥¿¸Ñ:" <<  szKey << endl <<endl;
	}	
}

void print_millionstar()//¦Ê¸U¤jºq¬Ptitle 
{
	cout << con::bg_black << setw( 4 ) << " " << endl;
    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o¢o¢o ¢o¢o¢o¢o¢o      ¢o    ¢o¢o¢o¢o ¢o     ¢o¢o¢o¢o¢o     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  ¢o         ¢o        ¢o¢o¢o¢o¢o     ¢o  ¢o¢o¢o ¢o  ¡¹  ¢o     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o¢o¢o  ¢o¢o¢o¢o       ¢o      ¡¹ ¢o  ¢o  ¢o ¢o¢o¢o¢o¢o     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o      ¢o ¢o     ¢o      ¢o¢o        ¢o    ¢o    ¢o            " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o      ¢o¢o      ¢o     ¢o  ¢o  ¢o¢o¢o¢o  ¢o¢o  ¢o¢o¢o¢o¢o     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o¢o¢o        ¢o    ¢o    ¢o      ¢o  ¢o  ¢o     ¢o         " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o      ¢o        ¢o   ¢o      ¢o  ¡¹ ¢o ¢o    ¢o  ¢o¢o¢o       " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o      ¢o        ¢o  ¢o        ¢o    ¢o¢o      ¢o   ¢o         " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o¢o¢o  ¢o¢o¢o¢o ¢o          ¢o ¢o¢o¢o       ¢o¢o¢o¢o¢o     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_white  << setw( 70 ) << "--------------THE       MILLION        STAR ---------------     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl; 
}
void print_menu() //ºq¦±Ãþ§O¿ï³æ 
{
		cout << con::bg_black << setw( 4 ) << " " << endl;     
    	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùùùùùß" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "ùø  1. KTV±Æ¦æº]    ùø" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "ùãùùùùùùùùùùùùùùùùùùùå" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;   
    	cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùùùß" << endl ;
		cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "ùø  2. ¸g¨å¯«¦±   ùø" << endl ;
		cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "ùãùùùùùùùùùùùùùùùùùå" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;  
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùÝùùùùùùùùùùùùùùùùùùùß" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùø  3. ¤u¨ã¤H¤§ºq   ùø" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùãùùùùùùùùùùùùùùùùùùùå" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;  
    	cout << con::bg_black << setw( 26 ) << " ";     
		cout << con::bg_black << con::fg_white << "½Ð¿é¤J±z­n¿ïªººq¦±Ãþ§O:";
}
void playgame()
{
    int game_order = 0;
    int song = 0;
    char playmode = 0;
	cout << con::clr;
     
	print_millionstar();
    cout << con::bg_black << setw( 4 ) << " " << endl;     
    cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùùùß" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "ùø  1. ¶}©l¹CÀ¸   ùø" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "ùãùùùùùùùùùùùùùùùùùå" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;   
    cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùùùß" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "ùø  2. ¹CÀ¸¤¶²Ð   ùø" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "ùãùùùùùùùùùùùùùùùùùå" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;  
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùÝùùùùùùùùùùùùùùùùùß" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùø  3. µ²§ô¹CÀ¸   ùø" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùãùùùùùùùùùùùùùùùùùå" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;  
    cout << con::bg_black << setw( 27 ) << " ";     
	cout << con::bg_black << con::fg_white << "½Ð¿é¤J±z¥Ø«e­n¶i¦æªº¿ï¶µ:";
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
		    cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o    ¢o ¢o¢o¢o¢o ¢o      ¢o   ¢o    ¢o ¢o  ¢o¢o          ¢o      ¢o     " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o   ¢o     ¢o    ¢o      ¢o ¢o¢o¢o  ¢o ¢o       ¢o¢o¢o   ¢o   ¢o¢o¢o¢o  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o  ¢o      ¢o     ¢o    ¢o    ¢o    ¢o ¢o  ¢o¢o        ¢o¢o¢o  ¢o  ¢o   " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o ¢o       ¢o     ¢o    ¢o    ¢o  ¢o¢o ¢o¢o ¢o  ¢o¢o¢o   ¢o   ¢o¢o¢o¢o  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o¢o        ¢o      ¢o  ¢o   ¢o¢o¢o  ¢o ¢o   ¢o    ¢o    ¢o¢o  ¢o ¢o ¢o  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o ¢o       ¢o      ¢o  ¢o     ¢o  ¢o¢o ¢o¢o ¢o    ¢o  ¢o ¢o ¢o  ¢o      " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o  ¢o      ¢o       ¢o¢o      ¢o    ¢o ¢o   ¢o    ¢o ¢o  ¢o  ¢o ¢o¢o¢o  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o   ¢o     ¢o       ¢o¢o      ¢o  ¢o¢o ¢o¢o ¢o    ¢o     ¢o    ¢o   ¢o  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "¢o    ¢o    ¢o        ¢o     ¢o¢o    ¢o ¢o   ¢o  ¢o¢o     ¢o   ¢o  ¢o¢o  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << setw( 75 ) << "     " << endl;   
			
			
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red  <<con::fg_white << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "ùø 1. ¤p©¯¹B    ùø" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "ùãùùùùùùùùùùùùùùùå" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "ùø 2.PLAY§Ú©A   ùø" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "ùãùùùùùùùùùùùùùùùå" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùÝùùùùùùùùùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùø  3. ¤£¬°½Ö¦Ó°µªººq   ùø" << endl ;
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùãùùùùùùùùùùùùùùùùùùùùùùùå" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 30 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "½Ð¿é¤J§A­n¿ïªººq¦±¡G";
			cin >> song;
			if(song == 1)
			{
			    lucky();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
			if(song == 2)
			{
			    jolin();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
			if(song == 3)
			{
			    jj();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
		}
		if(menu == 2)
		{
			cout << con::clr;
		    cout << con::bg_black << setw( 4 ) <<" " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  ¢o    ¢o¢o¢o¢o¢o    ¢o  ¢o      ¢o      ¢o       ¢o ¢o        " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << " ¢o  ¢o  ¢o ¢o ¢o  ¢o¢o¢o¢o¢o¢o ¢o¢o¢o ¢o¢o¢o¢o    ¢o ¢o        " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o  ¢o ¢o ¢o   ¢o ¢o  ¢o ¢o    ¢o  ¢o ¢o ¢o ¢o¢o¢o¢o¢o¢o    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "   ¢o    ¢o ¢o ¢o  ¢o¢o¢o¢o¢o¢o   ¢o¢o ¢o¢o¢o¢o ¢o ¢o  ¢o ¢o    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  ¢o    ¢o¢o¢o¢o¢o ¢o ¢o  ¢o ¢o  ¢o¢o¢o¢o ¢o ¢o ¢o¢o¢o¢o¢o¢o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o¢o           ¢o ¢o  ¢o ¢o ¢o ¢o  ¢o¢o¢o¢o ¢o ¢o  ¢o ¢o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "   ¢o    ¢o¢o¢o¢o ¢o¢o¢o¢o¢o¢o¢o   ¢o     ¢o    ¢o¢o¢o¢o¢o¢o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << " ¢o¢o¢o     ¢o        ¢o  ¢o       ¢o     ¢o    ¢o ¢o  ¢o ¢o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o ¢o ¢o ¢o¢o¢o¢o    ¢o    ¢o      ¢o     ¢o    ¢o¢o¢o¢o¢o¢o    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;    
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "ùø  1. §ÚÃø¹L   ùø" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "ùãùùùùùùùùùùùùùùùå" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black  << setw( 10 )<< "ùÝùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "ùø  2. ¬y¬P«B   ùø" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "ùãùùùùùùùùùùùùùùùå" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùÝùùùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùø  3. ¤T¤Ñ¤T©]   ùø" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùãùùùùùùùùùùùùùùùùùå" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 31 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "½Ð¿é¤J§A­n¿ïªººq¦±¡G";
			cin >> song;
			if(song == 1)
			{
			    sad();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
			if(song == 2)
			{
			    starrain();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
			if(song == 3)
			{
			    amei();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
		}
		if(menu == 3)
		{
			cout << con::clr;
		    cout << con::bg_black << setw( 4 ) <<" " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o¢o¢o ¢o¢o¢o¢o¢o      ¢o         ¢o     ¢o¢o¢o¢o¢o ¢o        " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ¢o     ¢o  ¢o  ¢o      ¢o     ¢o¢o¢o¢o¢o       ¢o   ¢o¢o¢o¢o  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ¢o     ¢o  ¢o  ¢o      ¢o            ¢o     ¡¹ ¢o   ¢o    ¢o  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ¢o     ¢o  ¢o  ¢o     ¢o¢o          ¢o         ¢o      ¢o     " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ¢o     ¢o  ¢o  ¢o    ¢o  ¢o        ¢o    ¢o¢o¢o¢o¢o   ¢o      " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ¢o     ¢o  ¢o  ¢o   ¢o    ¢o      ¢o           ¢o    ¢o¢o     " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ¢o   ¢o¢o¢o¢o¢o¢o¢o¢o      ¢o    ¢o         ¡¹ ¢o   ¢o  ¢o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    ¢o      ¢o    ¢o  ¢o        ¢o  ¢o             ¢o  ¢o    ¢o   " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "¢o¢o¢o¢o¢o ¢o      ¢o¢o          ¢o¢o¢o¢o¢o¢o  ¢o¢o¢o ¢o      ¢o  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;   
			
			
			
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red  <<con::fg_white << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "ùø  1. ¤p¥m¾´   ùø" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "ùãùùùùùùùùùùùùùùùå" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "ùÝùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "ùø  2. ©U§£¨®   ùø" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "ùãùùùùùùùùùùùùùùùå" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùÝùùùùùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùø  3. ·ö¤ßµ´¹ï   ùø" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "ùãùùùùùùùùùùùùùùùùùå" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl; 
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "ùÝùùùùùùùùùùùùùß" << endl ;
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "ùø  4. ¨k¶Ä   ùø" << endl ;
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "ùãùùùùùùùùùùùùùå" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 31 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "½Ð¿é¤J§A­n¿ïªººq¦±¡G";
			cin >> song;
			if(song == 1)
			{
			    dora();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
			if(song == 2)
			{
			    trash();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
			if(song == 3)
			{
			    definitely();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
			if(song == 4)
			{
			    male();
				cout << con::fg_red << "­n¦Aª±¤@¦¸¶Ü?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "·PÁÂ±z!";
					return;
				
			}
		
		}
	}
	if(game_order == 2)
	{
		cout << con::clr;
    	print_millionstar();
		//ÁÙ¨S¥´§¹ 
	}
	if(game_order==3)
	{
		cout << endl ;
		cout << con::bg_black << setw( 26 ) << " " << "½T©w­nÂ÷¶}¹CÀ¸¶Ü?(N/Y)";
		char exit = 0;
		cin >> exit;
		if (exit == 'N')
		{
			//ÁÙ¨S¥´§¹ 
		}
		if(exit == 'Y')
		{
			cout << con::clr;
			cout << "·PÁÂ±z!";
			return;
		}
	}
        
	return;
}
void waiting(int mins, double secs)
{
    clock_t startLrc=clock();//è¨˜éŒ„æ­Œè©žé–‹å§‹æ™‚åˆ»
    secs += mins*60;
    clock_t accuTime=secs * CLOCKS_PER_SEC; //ç´¯è¨ˆæ™‚é–“æ›ç®—æ¯«ç§’
    clock_t delay = accuTime + startSong - startLrc;//æ›ç®—å…©å¥é–“éš”
    while (clock()-startLrc < delay)//wait until time elapses
    ;//note the semicolon
  
}

