#include "BeeApiary.h"

int main()
{
	
	Bee b1;
	Bee b3("worker", "active", false, "healthy", 35, 14, 0.0, 0.1);
	Bee b4(b3);
	
	
	cout << b1.toString() << endl;
	cout << b3.toString() << endl;
	cout << b4.toString() << endl;



	return 0;
}