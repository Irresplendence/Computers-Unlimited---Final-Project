#include <iostream>
#include <windows.h>                  // For gotoxy() and Sleep function
#include "Utilities.h"
#include <string>

using namespace std;


void splashScreen()
{
	system("CLS");
	system("Color 2B");


	//http://www.kammerl.de/ascii/AsciiSignature.php
	//(Font: 'dosrebel')
	string art = "";
	art += "�����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n";
	art += "\n";
	art += "   ���������                             ����������                 �����     �����             ��        \n";
	art += "  ��۰�������     ���         ���       ����۰������               �����     �����             ���        \n";
	art += " ���     ���     ����        ����        ����   �����  ������    �������   �������  ����� ���۰��   ����� \n";
	art += "����          ����������� �����������    ����    ���� ��������  ��۰����  ��۰���� ����� ����      ��۰�  \n";
	art += "����         �������۰�� �������۰��     ����    ����  ������� ���� ���� ���� ����  ���� ����     ������� \n";
	art += "�����     ���    ����        ����        ����    ���  ��۰���� ���� ���� ���� ����  ���� ����      �������\n";
	art += "�����������     ���         ���         ����������  ���������۰��������۰��������� ���������      ������  \n";
	art += "  ���������                             ����������    ��������  ��������  ��������   ��������     ������  \n";
	art += "                                                                                     ��� ����             \n";
	art += "                                                                                    ��������              \n";
	art += "                                                                                     ������               \n";
	art += "\n";
	art += "\t\t\t\t   ���������                                                 �����                           ���������   �����                               \n";
	art += "\t\t\t\t  ��۰�������                                               �����                           ��۰������� �����                                \n";
	art += "\t\t\t\t ���     ���   ������  �������������   ��������  ����� ���� �������    ������  ��������    ����    ���  �������    ������  ��������   ������ \n";
	art += "\t\t\t\t����          ��۰���۰���۰���۰���� ����۰���۰���� ���� �����۰    ��۰���۰���۰����   ����������� �����۰    ��۰���۰���۰���� ��۰����\n";
	art += "\t\t\t\t����         ���� ���� ���� ���� ����  ���� ���� ���� ����   ����    ��������  ���� ���     �����������  ����    ���� ���� ���� ��� �������� \n";
	art += "\t\t\t\t�����     ��۰��� ���� ���� ���� ����  ���� ���� ���� ����   ���� ��۰��۰��   ����         ���    ����  ���� ��۰��� ���� ����     ���۰��  \n";
	art += "\t\t\t\t ����������� ��������  ����۰��� ����� ��������  ����������  ������� ��������  �����       �����������   ������� ��������  �����    �������� \n";
	art += "\t\t\t\t  ���������   ������  ����� ��� �����  ���۰��    ��������    �����   ������  �����         ���������     �����   ������  �����      ������  \n";
	art += "\t\t\t\t                                       ����                                                                                                  \n";
	art += "\t\t\t\t                                       �����                                                                                                 \n";
	art += "\t\t\t\t                                      �����                                                                                                  \n";
	art += "\n";
	art += "�����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������\n";

	cout << art;
	cin.get();

	system("PAUSE");

}