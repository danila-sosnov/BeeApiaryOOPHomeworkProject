#include "BeeApiary.h"

int main()
{
	Bee b1, b2;

	b1.type = "worker";
	b1.behavior = "active";
	b1.in_hive = false;
	b1.health = "healthy";
	b1.lifetime = 31;

	b2.type = "male bee";
	b2.behavior = "agressive";
	b2.in_hive = true;
	b2.health = "sick";
	b2.lifetime = 21;

	cout << "Before: " << endl;
	cout << b1.getString() << endl;
	cout << b2.getString() << endl;

	b1 = b2;

	cout << "After: " << endl;
	cout << b1.getString() << endl;
	cout << b2.getString() << endl;



}