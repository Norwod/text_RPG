#include<conio.h>
#include <string>
#include<ctime>
#include<iostream>
using namespace std;

class Enemy 
{
	private:
		int enemyHealth;
		int enemyBasicDamage;
		string nameEnemy;	
	public: 
		Enemy(int n_enemyHealth, string n_nameEnemy)
		{
			setState(n_enemyHealth, n_nameEnemy);
		}
		void setState(int n_enemyHealth, string n_nameEnemy)
		{
			enemyHealth = n_enemyHealth;			
			nameEnemy = n_nameEnemy;			
		}
		int getEnemyDamage()
		{
			srand(time(0));
			enemyBasicDamage = 1+ rand() %20;
			return enemyBasicDamage;
		}
		void setEnemyDamage(int n_enemyBasicDamage)
		{
			enemyBasicDamage = n_enemyBasicDamage;
		}				
		int RollDice()
		{
		//	srand(20)
		//	int ran = rand() % 20 + 1;
			srand(time(0));			
			enemyBasicDamage =1+ rand() %20;
			return enemyBasicDamage;
		}
};
