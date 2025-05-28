#include "Initializer.h"


int main()
{

	Initializer initializer;

	int count;

	cout << "Input number of bees: ";
	cin >> count;

	Hive hive;

	for (int i = 0; i < count; i++)
	{
		Bee bee;
		hive.add(bee);
	}

	initializer.init(hive);

	cout << "List of bees:\n" << hive.toString() << endl;

	return 0;
}