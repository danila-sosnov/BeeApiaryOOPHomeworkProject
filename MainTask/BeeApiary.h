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
	double* dailyHoneyHistory;


	Bee() : Bee("worker", "idle", true, "healthy", 35, 1, 0.0, 0.1)
	{

	}

	Bee(string tp, int a) : Bee(type, "idle", true, "healthy", 35, age, 0.0, 0.1)
	{

	}

	Bee(string type, string behaviour, bool in_hive, string health, int lifetime, int age, double honeyProduced, double dailyHoney)
	{
		this->type = type;
		this->behavior = behaviour;
		this->in_hive = in_hive;
		this->health = health;
		this->lifetime = lifetime;
		this->age = age;
		this->honeyProduced = honeyProduced;
		this->dailyHoney = dailyHoney;
		dailyHoneyHistory = new double[lifetime];
		for (int i = 0; i < lifetime; i++)
		{
			dailyHoneyHistory[i] = 0.0;
		}
	}

	Bee(const Bee& bee) : Bee(bee.type, bee.behavior, bee.in_hive,
		bee.health, bee.lifetime, bee.age, bee.honeyProduced,
		bee.dailyHoney)
	{
		for (int i = 0; i < lifetime; i++)
		{
			dailyHoneyHistory[i] = bee.dailyHoneyHistory[i];
		}
	}

	~Bee()
	{
		delete this->dailyHoneyHistory;
	}

	string toString()
	{
		string s = "Type: " + this->type;
		s += ", behavior: " + this->behavior
			+ ",is in hive: " + (this->in_hive ? "yes" : "no")
			+ ", health: " + this->health
			+ ", lifetime: " + to_string(this->lifetime) + " days"
			+ ", age:" + to_string(this->age) + " days"
			+ ", daily honey: " + to_string(this->dailyHoney)
			+ " ---------> "
			+ "produced honey: " + to_string(getHoney());



		return s;
	}

	string convert()
	{
		string s = "[";

		if (this->lifetime > 0)
		{
			for (int i = 0; i < this->lifetime - 1; i++)
			{
				s += to_string(this->dailyHoneyHistory[i]) + ", ";
			}

			s += to_string(this->dailyHoneyHistory[this->lifetime - 1]);
		}

		s += "]";

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