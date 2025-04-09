#include "BeeApiary.h"

int main()
{
	Bee b1, b2;

	b1.type = "worker";
	b1.behavior = "active";
	b1.in_hive = false;
	b1.health = "healthy";
	b1.lifetime = 35;
	b1.age = 14;
	b1.dailyHoney = 0.1;
	b1.honeyProduced = 0.0;

	b2.type = "drone";
	b2.behavior = "agressive";
	b2.in_hive = true;
	b2.health = "sick";
	b2.lifetime = 60;
	b2.age = 34;
	b2.dailyHoney = 0.0;
	b2.honeyProduced = 0.0;
	
	cout << b1.getString() << endl;
	cout << b2.getString() << endl;

	
	

	



}