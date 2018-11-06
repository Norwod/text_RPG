#include<conio.h>
#include <string>
using namespace std;

class Enemy 
{
	private:
		int enemyHealth;
		int enemyBasicDamage;
		string nameEnemy;	
	public: 
		Enemy(int n_enemyHealth, int n_enemyBasicDamage, string n_nameEnemy)
		{
			setState(n_enemyHealth, n_enemyBasicDamage, string n_nameEnemy);
		}
		void setState(int n_enemyHealth, int n_enemyBasicDamage, string n_nameEnemy)
		{
			enemyHealth = n_enemyHealth;
			enemyBasicDamage = n_enemyBasicDamage;
			nameEnemy = n_nameEnemy;			
		}
		
		
};
