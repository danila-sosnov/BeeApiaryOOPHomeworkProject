#include "BeeApiary.h"

int main()
{
	
	Bee b1;
	Bee b2("drone");
	Bee b3("queen", 720);
	Bee b4("worker", "active", false, "healthy", 35, 14, 0.0, 0.1);
	Bee b5(b4);
	
	
	cout << b1.toString() << endl;
	cout << b2.toString() << endl;
	cout << b3.toString() << endl;
	cout << b4.toString() << endl;
	cout << b5.toString() << endl;


	return 0;
}