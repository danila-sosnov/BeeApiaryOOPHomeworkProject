#include "Initializer.h"


int main()
{

	Initializer initializer;

	int count;

	cout << "Input number of bees: ";
	cin >> count;

	Hive hive(count);

	

	initializer.init(hive);

	cout << "List of bees:\n" << hive.toString() << endl;

	return 0;
}