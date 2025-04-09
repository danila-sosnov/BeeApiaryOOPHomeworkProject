#include <iostream>
using namespace std;
#include <string>

class Bee
{
	public:
		string type;
		string behavior;
		bool in_hive;
		string health;
		int lifetime;
		int age;
		double honeyProduced;
		double dailyHoney;
			
		
		string getString()
		{
			string s = "Type: " + type;
			s += ", behavior: " + behavior
				+ ",is in hive: " + (in_hive ? "yes" : "no")
				+ ", health: " + health
				+ ", lifetime: " + to_string(lifetime) + " days"
				+ ", age:" + to_string(age) + " days"
				+ ", produced honey: " + to_string(getHoney());



			return s;
		}

		double getHoney()
		{
			for (int i = age; i >= 10; i--)
			{
				honeyProduced += dailyHoney;

			}
			
			return honeyProduced;
		}

		void changeObjectByValue(Bee b1)
		{
				
			b1.age += 5;
			
		}

		void changeObjectByReference(Bee& b1)
		{
					
				b1.age += 5;
			
		}

		

		

};
