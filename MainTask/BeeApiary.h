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
			
		
		Bee()
		{
			type = "worker";
			behavior = "idle";
			in_hive = true;
			health = "healthy";
			lifetime = 35;
			age = 1;
			honeyProduced = 0.0;
			dailyHoney = 0.1;
		}

		Bee(string tp)
		{
			type = tp;
			behavior = "idle";
			in_hive = true;
			health = "healthy";
			lifetime = 35;
			age = 1;
			honeyProduced = 0.0;
			dailyHoney = 0.1;
		}

		Bee(string tp, int a)
		{
			type = tp;
			behavior = "idle";
			in_hive = true;
			health = "healthy";
			lifetime = 35;
			age = a;
			honeyProduced = 0.0;
			dailyHoney = 0.1;
		}

		Bee(string tp, string bh, bool in_hv, string hp, int lf, int a, int hnProduced, int dlHoney)
		{
			type = tp;
			behavior = bh;
			in_hive = in_hv;
			health = hp;
			lifetime = lf;
			age = a;
			honeyProduced = hnProduced;
			dailyHoney = dlHoney;
		}

		Bee(const Bee& bee)
		{
			type = bee.type;
			behavior = bee.behavior;
			in_hive = bee.in_hive;
			health = bee.health;
			lifetime = bee.lifetime;
			age = bee.age;
			honeyProduced = bee.honeyProduced;
			dailyHoney = bee.dailyHoney;
		}

		~Bee()
		{

		}

		string toString()
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

};
