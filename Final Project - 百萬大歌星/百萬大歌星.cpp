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
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "           �o          �o�o�o�o        �o           " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o  �o�o�o�o�o      �o   �o   �o�o�o�o�o�o�o     " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o    �o  �o  �o          �o           " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o�o�o�o �o  �o  �o�o�o�o�o�o�o�o �o�o�o�o�o�o      " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o    �o  �o     �o  �o   ��   �o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o    �o  �o�o  �o   �o�o�o�o�o�o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o  �o�o�o�o �o�o         �o           " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o        �o  �o�o   �o�o�o�o�o�o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o�o�o�o�o�o�o�o�o     �o �o  �o       �o           " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "����������������" << "������������������" <<"������������������" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�� 1. �T��@  ��" << "�� 2. �@�r����  ��" <<"�� 3. call out  ��" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "����������������" << "������������������" <<"������������������" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   

	mciSendString("close trash.mp3" , NULL, 0, 0);
	mciSendString("open trash.mp3" , NULL, 0, 0);
	mciSendString("play trash.mp3" , NULL, 0, 0); 
	startSong = clock(); //�O���q���}�l�ɨ�

    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << setw( 30 )<<" " << "�q�W�G�U����\n";
    waiting(0,03.00);
    cout << setw( 30 )<<" " << "�����G���H�@�s�G�����\n";
    waiting(0,05.00);
    cout << setw( 30 )<<" " << "�t�ۡG�����\n";
    waiting(0,07.00);
    cout << setw( 30 )<<" " << "�M��W�١G�����Ĥl���b���R\n";
    waiting(0,09.00);
    cout << setw( 30 )<<" " << "�o���G2004 �~ 11 �� 5 ��\n";
    waiting(0,30.97);
    cout << setw( 30 )<<" " << "���M�A�ʮ��a�A��ݪB�ͤS�t\n";
    waiting(0,35.36);
    cout << setw( 30 )<<" " << "�Y�l�S��R�o��\n";
    waiting(0,39.79);
    cout << setw( 30 )<<" " << "�Φb�A�J��ڡA���R�p������\n";
    waiting(0,44.18);
    cout << setw( 30 )<<" " << "��A�a�H���n�R\n";
    waiting(0,48.63);
    cout << setw( 30 )<<" " << "�ڨ����A�����A�A�Y���ڬ~�J\n";
    waiting(0,53.04);
    cout << setw( 30 )<<" " << "�A�Q�ۭt�ک�R\n";
    waiting(0,57.47);
    cout << setw( 30 )<<" " << "�Y���F�n��A�A�i�H�}�W���\n";
    waiting(1,01.68);
    cout << setw( 30 )<<" " << "�]���A���t�����i��\n";
    waiting(1,05.75);
    cout << setw( 30 )<<" " << "���A�A�ڤ~���t��\n";
    waiting(1,09.35);
    cout << setw( 30 )<<" " << "���A������A�ڤ~���a�s\n";
    waiting(1,13.85);
    cout << setw( 30 )<<" " << "�A�Y���n�A�ڬO�A���U����\n";
    waiting(1,19.32);
    cout << setw( 30 )<<" " << "��������������\n";
	char szKey[] = "�C��ť�A�����n";
	char szInput[80];
	cout << setw( 30 )<<" "; 
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		cout << setw( 30 )<<" " << "�z�u��!";
	}
	else
	{
		cout << setw( 30 )<<" " << "���I" << endl;
		cout << setw( 30 )<<" " << "����:" <<  szKey << endl <<endl;
	}	
}
void jj()
{
	cout << con::clr;
	cout << con::bg_black << setw( 4 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " "<< con::bg_blue << setw(60 ) << "     " << endl;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "           �o          �o�o�o�o        �o           " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o  �o�o�o�o�o      �o   �o   �o�o�o�o�o�o�o     " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o    �o  �o  �o          �o           " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o�o�o�o �o  �o  �o�o�o�o�o�o�o�o �o�o�o�o�o�o      " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o    �o  �o     �o  �o   ��   �o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o    �o  �o�o  �o   �o�o�o�o�o�o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o  �o�o�o�o �o�o         �o           " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "   �o    �o  �o        �o  �o�o   �o�o�o�o�o�o      " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o�o�o�o�o�o�o�o�o     �o �o  �o       �o           " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "����������������" << "������������������" <<"������������������" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�� 1. �T��@  ��" << "�� 2. �@�r����  ��" <<"�� 3. call out  ��" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "����������������" << "������������������" <<"������������������" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   
	mciSendString("close not for who song.mp3" , NULL, 0, 0);
	mciSendString("open not for who song.mp3" , NULL, 0, 0);
	mciSendString("play not for who song.mp3" , NULL, 0, 0); 
	startSong = clock(); //�O���q���}�l�ɨ�
	
	startSong = clock(); //�O���q���}�l�ɨ�

    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�G�����֦ӧ@���q\n";
    waiting(0,05.00);
    cout << "�t�ۡG�L�T��\n";
    waiting(0,07.00);
    cout << "��:�L���� ��:�L�T��\n";
    waiting(0,09.00);
    cout << "�M��W�١G�M�ۤv���\n";
    waiting(0,27.03);
    cout << "��̧ڳo�@�� �����֦ӧ@���q\n";
    waiting(0,33.79);
    cout << "�Pı�W�ϩ����~���]��\n";
    waiting(0,40.31);
    cout << "���g�����@�� �^�Y���M�{���o\n";
    waiting(0,47.38);
    cout << "�ݭn �q�O�ЦA�N�� ���H\n";
    waiting(0,54.25);
    cout << "�M�L�����ߪ� ���a��\n";
    waiting(1,00.78);
    cout << "�M���Ǩ��L�� �е��@��\n";
    waiting(1,10.13);
    cout << "�ڬ��V�O��F�� �R�b�I�᩹�e��\n";
    waiting(1,16.67);
    cout << "��ک�_�Y�~�oı �ڬO���O�ѤF��\n";
    waiting(1,23.35);
    cout << "�֨��]����� �]����̳��O��\n";
    waiting(1,29.99);
    cout << "���������� �� ���� ���� ���� ���� ������\n";//�@�w���ӤH �L ���L �׹L �{�L �f�L �L�O��
    char szKey[] = "�@�w���ӤH �L ���L �׹L �{�L �f�L �L�O��";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}
void jolin()
{
	cout << con::clr;
	cout << con::bg_black << setw( 4 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " "<< con::bg_blue << setw(60 ) << "     " << endl;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) <<  "�o�o�o �o     �o�o�o �o  �o �o             " << endl;;
	cout << con::bg_black << setw(10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) <<  "�o  �o �o     �o  �o �o  �o �o             " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o  �o �o     �o  �o �o  �o �o             " << endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o  �o �o     �o�o�o �o  �o �o             " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o�o�o �o     �o  �o �o�o�o �o             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o     �o     �o  �o   �o   �o             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o     �o     �o  �o   �o   �o             " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o     �o     �o  �o   �o                  " <<endl;
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << con::fg_yellow << setw( 60 ) << "�o     �o�o�o �o  �o   �o   �o             " <<endl; 
	cout << con::bg_black << setw( 10 )<< " "<< con::bg_blue << setw( 60 ) << "     ";
	cout << con::bg_black << setw( 10 ) << " " << endl;
	cout << con::bg_black << setw( 10 ) << " " << endl;      
    cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "����������������" << "������������������" <<"������������������" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "�� 1. �T��@  ��" << "�� 2. �@�r����  ��" <<"�� 3. call out  ��" << endl ;
	cout << con::bg_black << setw( 14 ) << " "<< con::bg_red << con::fg_white  << setw( 10 ) << "����������������" << "������������������" <<"������������������" << endl ;
  
	cout  <<  endl << endl << con::bg_black <<con::fg_white ;   
	mciSendString("close play.mp3" , NULL, 0, 0);
	mciSendString("open play.mp3" , NULL, 0, 0);
	mciSendString("play play.mp3" , NULL, 0, 0); 

     startSong = clock(); //�O���q���}�l�ɨ�
    
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�GPLAY �کA\n";
    waiting(0,03.00);
    cout << "�@���G����� �@���G�٤l��\n";
    waiting(0,05.00);
    cout << "�t�ۡG���̪L\n";
    waiting(0,18.98);
    cout << "�b�]�@�I��\n";
    waiting(0,19.76);
    cout << "�L�������Φ�j�f\n";
    waiting(0,21.36);
    cout << "�M�᤭�I��\n";
    waiting(0,22.00);
    cout << "�U�H�n�s��ޤj�|\n";
    waiting(0,23.66);
    cout << "���s�~�N�ڬw�e��\n";
    waiting(0,24.80);
    cout << "�a�U�ɺt�Q�׷|\n";
    waiting(0,26.12);
    cout << "�E�s�~�N�����_�X\n";
    waiting(0,27.17);
    cout << "ñ�W����֩�|\n";
    waiting(0,28.50);
    cout << "�s�U���Q�ץ_�����I\n";
    waiting(0,29.96);
    cout << "�����Q�X��\n";
    waiting(0,30.91);
    cout << "�����Իż�\n";
    waiting(0,31.74);
    cout << "����Y��ͦs����\n";
    waiting(0,33.31);
    cout << "�T�Ѩ�]����K�q\n";
    waiting(0,34.44);
    cout << "�����������Ŭ�\n";
    waiting(0,35.64);
    cout << "�ڭ���o�`�ש��P\n";
    waiting(0,37.30);
    cout << "�L�N�Ѷʯv\n";
    waiting(0,38.13);
    cout << "�����˹G\n";
    waiting(0,38.68);
    cout << "�å@���ˬ���\n";
    waiting(0,40.45);
    cout << "�k���רŪ��v\n";
    waiting(0,41.40);
    cout << "�E�Y����\n";
    waiting(0,42.82);
    cout << "�k���s�}�g��\n";
    waiting(0,43.75);
    cout << "�����ٱ�\n";
    waiting(0,45.27);
    cout << "����󭫭n���O\n";
    waiting(0,46.41);
    cout << "�H���u\n";
    waiting(0,47.27);
    cout << "�ާA�p���j��\n";
    waiting(0,48.84);
    cout << "�کA\n";
    waiting(0,49.69);
    cout << "�ާA�O�p�M�s�O���f��\n";
    waiting(0,51.29);
    cout << "�کA\n";
    waiting(0,52.16);
    cout << "����������������\n";//�ާA�O���@������
	char szKey[] = "�ާA�O���@������";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}
void male()
{
	cout << con::clr;
	mciSendString("close male domestic.mp3" , NULL, 0, 0);
	mciSendString("open male domestic.mp3" , NULL, 0, 0);
	mciSendString("play male domestic.mp3" , NULL, 0, 0); 
	startSong = clock(); //�O���q���}�l�ɨ�
 
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�G�k��\n";
    waiting(0,03.00);
    cout << "�����G�d�J�s\n";
    waiting(0,05.00);
    cout << "�q��G�d�J�s\n";
    waiting(0,07.00);
    cout << "�M��G�N�x�O\n";
    waiting(0,09.00);
    cout << "�o���G2006 �~ 10 �� 13 ��\n";
    waiting(0,18.41);
    cout << "���@�@�ݤӦh�@�A�̷R���Z�k��\n";
    waiting(0,23.11);
    cout << "�ڴx�@�ڤ����@���ӭ˷����O��\n";
    waiting(0,27.76);
    cout << "�ȧA���ȧA�\�y�@�Ȩ�B�ͳ���\n";
    waiting(0,32.77);
    cout << "�ڥu�O�A���k��\n";
    waiting(0,37.15);
    cout << "���W�@���Ӧh�@�q���ѧd�ӱ��e\n";
    waiting(0,41.82);
    cout << "�����@�������@�٭n���@�I���q\n";
    waiting(0,46.56);
    cout << "�N���N��A�����@�~�����a���ʬ�\n";
    waiting(0,51.48);
    cout << "�������ѧڨӰ�\n";
    waiting(0,55.60);
    cout << "���ާA���ۧ��ۭw�ۧڦb�A���k\n";
    waiting(1,00.25);
    cout << "�p�G�A�֤F�ĤF���F�����A����\n";
    waiting(1,04.94);
    cout << "������������ ������������\n";//�ڰ��A���k�ġ@�@�Ѩ�ߤW�u
    char szKey[] = "�ڰ��A���k�ġ@�@�Ѩ�ߤW�u";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}
void amei()
{
	cout << con::clr;
	mciSendString("close three days.mp3" , NULL, 0, 0);
	mciSendString("open three days.mp3" , NULL, 0, 0);
	mciSendString("play three days.mp3" , NULL, 0, 0); 
	startSong = clock(); //�O���q���}�l�ɨ�

    startSong = clock(); //�O���q���}�l�ɨ�
    
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�G�T�ѤT�]\n";
    waiting(0,03.00);
    cout << "�q��G�i�f�f\n";
    waiting(0,09.73);
    cout << "Ba Ba Ba Ba . . .\n";
    waiting(0,23.37);
    cout << "�@�I�����|�� �ڤw�g���F�T�ѤT�]\n";
    waiting(0,30.12);
    cout << "�ڲ{�b���߱��ܨT���]�|�KOh Oh Oh\n";
    waiting(0,36.09);
    cout << "���������|�h�� ���٭n�A���T�ѤT�]\n";
    waiting(0,42.48);
    cout << "�ڲ{�b���߱����o�n���i�H�� Oh Oh Oh\n";
    waiting(0,48.78);
    cout << "OK OK �[�J�ڪ���C\n";
    waiting(0,51.78);
    cout << "NoK NoK �դѸ���©]\n";
    waiting(0,55.10);
    cout << "Always Always �ּ֤��|�Y��\n";
    waiting(0,58.10);
    cout << "No Way No Way �֤]�O�Q�ڵ� yeah\n";
    waiting(1,04.34);
    cout << "�T�ѤT�]���T��b�] ���R���n����\n";
    waiting(1,10.44);
    cout << "�T�ѤT�]���T��b�] �ƯB�u�a����\n";
    waiting(1,16.78);
    cout << "������������������ ������������\n";//�T�ѤT�]���T��b�]�����u�Ѧ���

	char szKey[] = "�T�ѤT�]���T��b�] �����u�Ѧ���";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}
void lucky()
{
	cout << con::clr;
	mciSendString("close little lucky.mp3" , NULL, 0, 0);
	mciSendString("open little lucky.mp3" , NULL, 0, 0);
	mciSendString("play little lucky.mp3" , NULL, 0, 0); 
	startSong = clock(); //�O���q���}�l�ɨ�
	
	 startSong = clock(); //�O���q���}�l�ɨ�
    
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�G�p���B\n";
    waiting(0,03.00);
    cout << "���G�}�@�áB�d���֡@���GJerry C\n";
    waiting(0,05.00);
    cout << "�t�ۡG���L��\n";
    waiting(0,15.11);
    cout << "��ť���B�w ���b�C�C��a\n";
    waiting(0,21.22);
    cout << "��ť������ �U�����n�T�_\n";
    waiting(0,27.28);
    cout << "�i�O�ڨS��ť��\n";
    waiting(0,29.97);
    cout << "�A���n���{�u�I��کm�W\n";
    waiting(0,39.42);
    cout << "�R�W�A���ɭ� �٤����P��\n";
    waiting(0,45.41);
    cout << "���O�F �~ı�o�谩�ʤ�\n";
    waiting(0,51.51);
    cout << "������S���o�{\n";
    waiting(0,54.26);
    cout << "�J���F�A�O�ͩR�̦n���Ʊ�\n";
    waiting(1,01.80);
    cout << "�]�\���\n";
    waiting(1,03.31);
    cout << "���۷L���M���_\n";
    waiting(1,07.91);
    cout << "���۰l�v�ѪŤ����y�P\n";
    waiting(1,13.58);
    cout << "�H�z�ҷ�M���ѰO�O��\n";
    waiting(1,19.32);
    cout << "���� �B�� �@���q�q�u�@�b��a\n";
    waiting(1,25.73);
    cout << "��ӧA�O �ڳ̷Q�d�����B\n";
    waiting(1,30.95);
    cout << "��ӧڭ� �M�R�����g�a�o�����\n";
    waiting(1,37.03);
    cout << "�����ڹ�ܥ@�ɪ��M�w �����ڲO���B\n";
    waiting(1,44.70);
    cout << "�@�������O�A �@�Ф��V���u��\n";
    waiting(1,52.02);
    cout << "�P�A�۹J �n���B\n";
    waiting(1,55.28);
    cout << "�i�ڤ]���h ���A�\�y�������v�Q\n";
    waiting(02,01.34);
    cout << "��������������������\n";//���@�b�ڬݤ��쪺�ѻ�
    
    char szKey[] = "���@�b�ڬݤ��쪺�ѻ�";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}
void sad()
{
	cout << con::clr;
	mciSendString("close i am sad.mp3" , NULL, 0, 0);
	mciSendString("open i am sad.mp3" , NULL, 0, 0);
	mciSendString("play i am sad.mp3" , NULL, 0, 0); 

    startSong = clock(); //�O���q���}�l�ɨ�
    
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�G�����L\n";
    waiting(0,03.00);
    cout << "���G���H�a�@���G�P�Ƕ��@�s�G�P�Ƕ��E�d�T��\n";
    waiting(0,05.00);
    cout << "�q��G5566\n";
    waiting(0,07.00);
    cout << "�M��GFirst Album\n";
    waiting(0,09.00);
    cout << "�o���G2002 �~ 12 �� 11 ��\n";
    waiting(0,19.86);
    cout << "���@�~�q�q�L���u�������}\n";
    waiting(0,26.81);
    cout << "�L�������e�w�g���A��m\n";
    waiting(0,33.85);
    cout << "�A�`�ȵ����ҥH��R�ˮ`\n";
    waiting(0,40.86);
    cout << "���O�ھצ�A�����n����\n";
    waiting(0,46.64);
    cout << "�A��M�@���Ʊ�ڵ���\n";
    waiting(0,50.53);
    cout << "�ګK�q�q�����A���}\n";
    waiting(0,53.65);
    cout << "�p���A�@���F�˦^��\n";
    waiting(0,57.54);
    cout << "�s�ڦp�󱵨��o�w��\n";
    waiting(1,04.01);
    cout << "�����L���O���A���R��󪺹ڳQ���H�@�Ԧ�d�s\n";
    waiting(1,11.40);
    cout << "�ڥH���@�O�����@�A�o���A�󤣴r��\n";
    waiting(1,17.95);
    cout << "����������������������\n";//�����L���O�ѤF�A�ѤF�R
   
	char szKey[] = "�����L���O�ѤF�A�ѤF�R";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}
void dora()
{
	cout << con::clr;
	mciSendString("close dora a mon.mp3" , NULL, 0, 0);
	mciSendString("open dora a mon.mp3" , NULL, 0, 0);
	mciSendString("play dora a mon.mp3" , NULL, 0, 0); 
	startSong = clock(); //�O���q���}�l�ɨ�
 
    startSong = clock(); //�O���q���}�l�ɨ�
    
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�G�p�m��\n";
    waiting(0,05.00);
    cout << "�q��G�S�帩\n";
    waiting(0,17.00);
    cout << "�p�G�ڦ��P�k�� �ܤj�ܤp�ܺ}�G\n";
    waiting(0,21.00);
    cout << "�٭n�ܭӳ��O���e ���J�O�M���㪺�a\n";
    waiting(0,27.00);
    cout << "�p�G��00�������� �ڭn�s�L�p�m��\n";
    waiting(0,31.00);
    cout << "�˻f���M�ɥ��G�D ��h���󪺦a��\n";
    waiting(0,36.00);
    cout << "���p�� �j�H �a�H ���ܦ��n�H\n";
    waiting(0,41.00);
    cout << "(�٤j�a�n �ڬO�p�m��)\n";
    waiting(0,45.00);
    cout << "������ ������������������������\n";//�������p�m�����ڹ�{�Ҧ����@��
   
    char szKey[] = "������ �p�m�����ڹ�{�Ҧ����@��";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}

void definitely()
{
	cout << con::clr;
	mciSendString("close definetely love.mp3" , NULL, 0, 0);
	mciSendString("open definetely love.mp3" , NULL, 0, 0);
	mciSendString("play definetely love.mp3" , NULL, 0, 0); 

    startSong = clock(); //�O���q���}�l�ɨ�
    
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�Gè�ߵ���\n";
    waiting(0,03.00);
    cout << "�����G���B�n\n";
    waiting(0,05.00);
    cout << "�t�ۡG���t��\n";
    waiting(0,09.00);
    cout << "�M��G����è�ߡD���}\n";
    waiting(0,11.00);
    cout << "�o���G2004 �~ 11 �� 26 ��\n";
    waiting(0,17.83);
    cout << "�Q�Τ@�MLatte��p��K\n";
    waiting(0,22.25);
    cout << "�n���p��h�R�ڤ@�I\n";
    waiting(0,26.74);
    cout << "�t�ʪ������@�p�����o�طPı\n";
    waiting(0,31.49);
    cout << "�����H�����p�û����|\n";
    waiting(0,37.91);
    cout << "�ݨ��p�M�L�b�ڭ��e\n";
    waiting(0,42.37);
    cout << "�ҩ��ڪ��R�u�O�M�N\n";
    waiting(0,46.83);
    cout << "�p�����ڪ��@���Ǽ��|\n";
    waiting(0,51.39);
    cout << "�O�p�û������L����|\n";
    waiting(0,58.04);
    cout << "���p�I�X���ضˤߩp�û����A��\n";
    waiting(1,02.57);
    cout << "����������������������������\n";//�ڤS��W�j�j�ۤv�R�W�p���@��

   
	char szKey[] = "�ڤS��W�j�j�ۤv�R�W�p���@��";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}
void starrain()
{
	cout << con::clr;
	mciSendString("close star rain.mp3" , NULL, 0, 0);
	mciSendString("open star rain.mp3" , NULL, 0, 0);
	mciSendString("play star rain.mp3" , NULL, 0, 0); 
	startSong = clock(); //�O���q���}�l�ɨ�
 
    startSong = clock(); //�O���q���}�l�ɨ�
    
    waiting(0,01.00); //��J�֭p�ɶ��]���A��^
    cout << "�q�W�G�y�P�B\n";
    waiting(0,03.00);
    cout << "�@���G੸αd�@�@���G������\n";
    waiting(0,05.00);
    cout << "�q��GF4\n";
    waiting(0,07.00);
    cout << "�M��G�y�P���D�D��\n";
    waiting(0,09.00);
    cout << "�o���G2001 �~\n";
    waiting(0,25.00);
    cout << "[�P����]�G�ŬX���P�š@�������A�P��\n";
    waiting(0,31.18);
    cout << "[�P����]�G�ڦb�A����@���A�G�m�@���Ѫ�\n";
    waiting(0,38.00);
    cout << "[���Ӧ�]�G����A���L�@���A�\���I��@\n";
    waiting(0,45.04);
    cout << "[���Ӧ�]�ڷQ�����q�@�������浹��\n";
    waiting(0,52.00);
    cout << "[�d�ػ�]�G�o�A��@��ۧڨ��@���A�j�S��ˡ@\n";
    waiting(1,01.68);
    cout << "[�d�ػ�]�A���F�ڡ@�A�]���|�g����V\n";
    waiting(1,07.00);
    cout << "[���@��]�G���A�h�ݬy�P�B���b�o�a�y�W�@���A���\���b�ڪӻH\n";
    waiting(1,14.35);
    cout << "�n�A�۫H�ڪ��R�u�֬��A�i��\n";
    waiting(1,21.00);
    cout << "������������������\n";//�A�|�ݨ����֪��Ҧb

    char szKey[] = "�A�|�ݨ����֪��Ҧb";
	char szInput[80];
	printf ("�п�J�z���ѵ�?");
	cout << endl;
	cin >> szInput;
	if(strcmp (szKey,szInput) == 0)
	{
		puts ("�z�u��!");
	}
	else
	{
		cout << "���I" << endl;
		cout << "����:" <<  szKey << endl <<endl;
	}	
}

void print_millionstar()//�ʸU�j�q�Ptitle 
{
	cout << con::bg_black << setw( 4 ) << " " << endl;
    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o�o�o �o�o�o�o�o      �o    �o�o�o�o �o     �o�o�o�o�o     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  �o         �o        �o�o�o�o�o     �o  �o�o�o �o  ��  �o     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o�o�o  �o�o�o�o       �o      �� �o  �o  �o �o�o�o�o�o     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o      �o �o     �o      �o�o        �o    �o    �o            " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o      �o�o      �o     �o  �o  �o�o�o�o  �o�o  �o�o�o�o�o     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o�o�o        �o    �o    �o      �o  �o  �o     �o         " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o      �o        �o   �o      �o  �� �o �o    �o  �o�o�o       " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o      �o        �o  �o        �o    �o�o      �o   �o         " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o�o�o  �o�o�o�o �o          �o �o�o�o       �o�o�o�o�o     " << endl; 
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_white  << setw( 70 ) << "--------------THE       MILLION        STAR ---------------     " << endl;
	cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl; 
}
void print_menu() //�q�����O��� 
{
		cout << con::bg_black << setw( 4 ) << " " << endl;     
    	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "����������������������" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "��  1. KTV�Ʀ�]    ��" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "����������������������" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;   
    	cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��������������������" << endl ;
		cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��  2. �g�寫��   ��" << endl ;
		cout << con::bg_black << setw( 30 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��������������������" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;  
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "����������������������" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. �u��H���q   ��" << endl ;
		cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "����������������������" << endl ;
		cout << con::bg_black << setw( 4 ) << " " << endl;  
    	cout << con::bg_black << setw( 26 ) << " ";     
		cout << con::bg_black << con::fg_white << "�п�J�z�n�諸�q�����O:";
}
void playgame()
{
    int game_order = 0;
    int song = 0;
    char playmode = 0;
	cout << con::clr;
     
	print_millionstar();
    cout << con::bg_black << setw( 4 ) << " " << endl;     
    cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "��������������������" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "��  1. �}�l�C��   ��" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_red   << setw( 10 ) << "��������������������" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;   
    cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��������������������" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��  2. �C������   ��" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_white << con::fg_black << setw( 10 ) << "��������������������" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;  
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. �����C��   ��" << endl ;
	cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������" << endl ;
	cout << con::bg_black << setw( 4 ) << " " << endl;  
    cout << con::bg_black << setw( 27 ) << " ";     
	cout << con::bg_black << con::fg_white << "�п�J�z�ثe�n�i�檺�ﶵ:";
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
		    cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o    �o �o�o�o�o �o      �o   �o    �o �o  �o�o          �o      �o     " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o   �o     �o    �o      �o �o�o�o  �o �o       �o�o�o   �o   �o�o�o�o  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o  �o      �o     �o    �o    �o    �o �o  �o�o        �o�o�o  �o  �o   " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o �o       �o     �o    �o    �o  �o�o �o�o �o  �o�o�o   �o   �o�o�o�o  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o�o        �o      �o  �o   �o�o�o  �o �o   �o    �o    �o�o  �o �o �o  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o �o       �o      �o  �o     �o  �o�o �o�o �o    �o  �o �o �o  �o      " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o  �o      �o       �o�o      �o    �o �o   �o    �o �o  �o  �o �o�o�o  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o   �o     �o       �o�o      �o  �o�o �o�o �o    �o     �o    �o   �o  " << endl;
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << con::fg_yellow << setw( 75 ) << "�o    �o    �o        �o     �o�o    �o �o   �o  �o�o     �o   �o  �o�o  " << endl; 
			cout << con::bg_black << setw( 2 )<< " "<< con::bg_blue << setw( 75 ) << "     " << endl;   
			
			
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red  <<con::fg_white << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "�� 1. �p���B    ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "�� 2.PLAY�کA   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������������" << endl ;
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. �����֦Ӱ����q   ��" << endl ;
			cout << con::bg_black << setw( 29 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������������" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 30 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "�п�J�A�n�諸�q���G";
			cin >> song;
			if(song == 1)
			{
			    lucky();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
			if(song == 2)
			{
			    jolin();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
			if(song == 3)
			{
			    jj();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
		}
		if(menu == 2)
		{
			cout << con::clr;
		    cout << con::bg_black << setw( 4 ) <<" " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  �o    �o�o�o�o�o    �o  �o      �o      �o       �o �o        " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << " �o  �o  �o �o �o  �o�o�o�o�o�o �o�o�o �o�o�o�o    �o �o        " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o  �o �o �o   �o �o  �o �o    �o  �o �o �o �o�o�o�o�o�o    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "   �o    �o �o �o  �o�o�o�o�o�o   �o�o �o�o�o�o �o �o  �o �o    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "  �o    �o�o�o�o�o �o �o  �o �o  �o�o�o�o �o �o �o�o�o�o�o�o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o�o           �o �o  �o �o �o �o  �o�o�o�o �o �o  �o �o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "   �o    �o�o�o�o �o�o�o�o�o�o�o   �o     �o    �o�o�o�o�o�o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << " �o�o�o     �o        �o  �o       �o     �o    �o �o  �o �o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o �o �o �o�o�o�o    �o    �o      �o     �o    �o�o�o�o�o�o    " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;    
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "��  1. �����L   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black  << setw( 10 )<< "������������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "��  2. �y�P�B   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_white  <<con::fg_black << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. �T�ѤT�]   ��" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 31 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "�п�J�A�n�諸�q���G";
			cin >> song;
			if(song == 1)
			{
			    sad();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
			if(song == 2)
			{
			    starrain();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
			if(song == 3)
			{
			    amei();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
		}
		if(menu == 3)
		{
			cout << con::clr;
		    cout << con::bg_black << setw( 4 ) <<" " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;
		    cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o�o�o �o�o�o�o�o      �o         �o     �o�o�o�o�o �o        " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    �o     �o  �o  �o      �o     �o�o�o�o�o       �o   �o�o�o�o  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    �o     �o  �o  �o      �o            �o     �� �o   �o    �o  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    �o     �o  �o  �o     �o�o          �o         �o      �o     " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    �o     �o  �o  �o    �o  �o        �o    �o�o�o�o�o   �o      " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    �o     �o  �o  �o   �o    �o      �o           �o    �o�o     " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    �o   �o�o�o�o�o�o�o�o      �o    �o         �� �o   �o  �o    " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "    �o      �o    �o  �o        �o  �o             �o  �o    �o   " << endl;
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << con::fg_yellow << setw( 70 ) << "�o�o�o�o�o �o      �o�o          �o�o�o�o�o�o  �o�o�o �o      �o  " << endl; 
			cout << con::bg_black << setw( 4 )<< " " << con::bg_blue << setw( 70 ) << "     " << endl;   
			
			
			
		    cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 4 ) << " " << endl;    
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_red  <<con::fg_white << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "��  1. �p�m��   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_red <<con::fg_white  << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;   
		    cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "��  2. �U����   ��" << endl ;
			cout << con::bg_black << setw( 33 ) << " "<< con::bg_gray   << setw( 10 ) << "������������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��  3. ���ߵ���   ��" << endl ;
			cout << con::bg_black << setw( 32 ) << " "<< con::bg_yellow << con::fg_black   << setw( 14 ) << "��������������������" << endl ;
			cout << con::bg_black << setw( 4 ) << " " << endl; 
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "����������������" << endl ;
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "��  4. �k��   ��" << endl ;
			cout << con::bg_black << setw( 34 ) << " "<< con::bg_white << con::fg_black   << setw( 13 ) << "����������������" << endl ;
		
			cout << con::bg_black <<con::fg_white << setw( 4 ) << " " << endl;  
			cout << con::bg_black << setw( 31 ) << " " ;
			
			cout << con::bg_black << setw(14)<< "�п�J�A�n�諸�q���G";
			cin >> song;
			if(song == 1)
			{
			    dora();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
			if(song == 2)
			{
			    trash();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
			if(song == 3)
			{
			    definitely();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
			if(song == 4)
			{
			    male();
				cout << con::fg_red << "�n�A���@����?<Y/N>";
				cin >> playmode;
				if(playmode=='Y')
				{
					playgame();
				}
				else
					cout << con::clr;
					cout << "�P�±z!";
					return;
				
			}
		
		}
	}
	if(game_order == 2)
	{
		cout << con::clr;
    	print_millionstar();
		//�٨S���� 
	}
	if(game_order==3)
	{
		cout << endl ;
		cout << con::bg_black << setw( 26 ) << " " << "�T�w�n���}�C����?(N/Y)";
		char exit = 0;
		cin >> exit;
		if (exit == 'N')
		{
			//�٨S���� 
		}
		if(exit == 'Y')
		{
			cout << con::clr;
			cout << "�P�±z!";
			return;
		}
	}
        
	return;
}
void waiting(int mins, double secs)
{
    clock_t startLrc=clock();//記錄歌詞開始時刻
    secs += mins*60;
    clock_t accuTime=secs * CLOCKS_PER_SEC; //累計時間換算毫秒
    clock_t delay = accuTime + startSong - startLrc;//換算兩句間隔
    while (clock()-startLrc < delay)//wait until time elapses
    ;//note the semicolon
  
}

