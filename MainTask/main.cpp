#include "BeeApiary.h"

int main()
{
	Bee b1, b2;

	cout << "Input bee type(worker, male bee, queen bee)" << endl;
		cin >> b1.type >> b2.type;

	cout << "Input bee behavior(agressive, active)" << endl;
		cin >> b1.behavior >> b2.behavior;

	cout << "Is the bee in the hive?" << endl;
		cin >> b1.in_hive >> b2.in_hive;

	cout << "Input bee health(healthy, sick)" << endl;
		cin >> b1.health >> b2.health;

	cout << "Input bee lifetime(in days)" << endl;
		cin >> b1.lifetime >> b2.lifetime;

		


}