#include "Initializer.h"

int main()
{
	
	Bee* list = nullptr;
	Initializer initializer;

	int count;

	cout << "Input number of bees: ";
	cin >> count;

	initializer.init(list, count);

	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}


	return 0;
}