#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;


string characterName;
int characterHealth = 50;

void createCharacter()
{
	cout << "Введите имя персонажа: ";
	getline(cin, characterName);
	cout << "Выберите класс: 1.Воин 2.Вор 3.Маг 4.Похититель сердец" << endl;
	char choice = '0';

	// Выбор класса игроком
	while (choice != '1' && choice != '2' && choice != '3' && choice != '4') 
	{
		choice = _getch();
	}
	string characterClass;
	if (choice == '1')
	{
		characterClass = "Воин";
	}
	else if (choice == '2')
	{
		characterClass = "Вор";
	}
	else if (choice == '3')
	{
		characterClass = "Маг";
	}
	else 
	{
		characterClass = "Похититель сердец";
	}
	cout << "Вы выбрали: " << characterClass << endl;
	system("cls");
	cout << "Подтвердите правильность данных:\nИмя  персонажа: Фуриёб\nКласс: Мыш" << endl; // Рофляна
}

// Це тупо заглушка
void plug()
{
	cout << "Иди нах";
	Sleep(5000);
	exit;
}

int startgame()
{
	cout << "Добрый путник, хочешь ли ты пройти приключение полное опасностей?\nНажми Y, чтобы согласиться, или нажми N, чтобы пойти домой к мамочке\n";
	char choice = '0';
	while (choice != 'y' && choice != 'н' && choice != 'n' && choice != 'т')
	{
		choice = _getch();		
	}	
	if (choice == 'n' || choice == 'т')
	{
		cout << "Ну и иди отсюда нахуй, мудила" << endl;
		Sleep(5000);
		exit(1);
	}
	system("cls");
	createCharacter();
	cout << "\nТут игровая логика" << endl;
	return 0;
}


int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
	startgame();
	system("PAUSE");
	plug();
}

