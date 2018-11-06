#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include "Enemy.cpp"
using namespace std;

int main();
void HeroActions();
int RollDice();
void EnemyActions();
void RefreshScreen();

string characterName;
int characterHealth = 50;
int characterDamage;
int enemyHealth = 100;
int enemyDamage;

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
	Sleep(5000);
	system("cls");
	cout << "Подтвердите правильность данных:\nИмя  персонажа: Фуриёб\nКласс: Мыш" << endl; // Рофляна
}

// Це тупо заглушка
void plug()
{
	Enemy skelet(50, "Skeleton");
	int a=0;
	for(int i = 0;i<=100;i++)
	{	
		a = skelet.getEnemyDamage();
		cout << a << endl;
		Sleep(150);	
	}
	
	system("PAUSE");
}

int startgame()
{
	cout << "Добрый путник, хочешь ли ты пройти приключение полное опасностей?\nНажми Y, чтобы согласиться, или нажми N, чтобы пойти домой к мамочке\n";
	char choice = '0';
	while (choice != 'y' && choice != '�' && choice != 'n' && choice != '�')
	{
		choice = _getch();		
	}	
	if (choice == 'n' || choice == '�')
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

void combat()
{ 

	cout << "���������� �� ���� � ���������:" << endl;
	cout << "����� 'D', ����� ������� ���� ����������\n����� 'H', ����� ����������\n";
	cout << "Hero health is " << characterHealth << endl;
	cout << "Enemy Health is " << enemyHealth << endl;
	while (enemyHealth >= 0 && characterHealth >= 0)
	{
		HeroActions();
		EnemyActions();
		RefreshScreen();
	}
}

void HeroActions()
{
	unsigned short int heal = 5;
	char button = '0';
	button = _getch();	
	while (button != 'd' && button != 'h' && button != 't') 
	{
		button = _getch();
	}
	
	cout << "Битва началась" << endl;
	switch (button)
	{
	case 't':
		cout << "test" << endl;
		break;
	case 'h':
		if (characterHealth >= 46)
		{
			characterHealth = 50;
			break;
		}
		if (characterHealth == 50)
		{
			cout << "your health is full" << endl;
		} else {
			characterHealth += heal;
			cout << "Hero health is " << characterHealth << endl;
			break;
		}
	case 'd':
		characterDamage = RollDice();
		enemyHealth -= characterDamage;
		//system("cls");
		/*cout << "Hero Damage is " << heroDamage << endl;
		cout << "Enemy Health is " << enemyHealth << endl;*/
		break;
	default:
		break;
	}
}

void EnemyActions()
{
	enemyDamage = RollDice();
	characterHealth -= enemyDamage;
	/*system("cls");*/
	/*cout << "Enemy Damage is " << enemyDamage << endl;
	cout << "Hero Health is " << heroHealth << endl;*/
}

void RefreshScreen()
{
	system("cls");
	cout << "Hero Damage is " << characterDamage << endl;
	cout << "Hero Health is " << characterHealth << endl << endl;
	cout << "Enemy Health is " << enemyHealth << endl;
	cout << "Enemy Damage is " << enemyDamage << endl;	
}

// Метод для броска кубика, через него будет идти подсчёт урона
// TODO подумай, оставить его и для хила или сделать хилку постоянной
int RollDice()
{
	int ran = rand() % 20 + 1;
	return ran;
}

void EndGame()
{
	system("cls");
	if (characterHealth <= 0)
	{
		cout << "Ты проиграл" << endl;
		cout << "Ну ты и ебан. Соси писос" << endl;
		Sleep(5000);
		exit(0);
	}
	if (enemyHealth <= 0)
	{
		cout << "Ты выиграл" << endl;
		cout << "Молодец. Но всё равно соси писос" << endl;
		Sleep(5000);
		exit(0);
	}
}


int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
//	startgame();
//	combat();
//	EndGame();
	system("PAUSE");
	plug();
}
