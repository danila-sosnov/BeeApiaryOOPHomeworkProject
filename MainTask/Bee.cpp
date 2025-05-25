#include "Bee.h"


string Bee::convert()
{
	string s = "[";

	if (this->age > 0)
	{
		for (int i = 0; i < this->age - 1; i++)
		{
			s += to_string(this->dailyHoneyHistory[i]) + ", ";
		}

		s += to_string(this->dailyHoneyHistory[this->age - 1]);
	}

	s += "]";

	return s;

}

string Bee::getType()
{
	return type;
}

void Bee::setType(string type)
{
	this->type = type;
}

string Bee::getBehavior()
{
	return behavior;
}

void Bee::setBehavior(string behavior)
{
	this->behavior = behavior;
}

bool Bee::isInHive()
{
	return in_hive;
}

void Bee::setInHive(bool in_hive)
{
	this->in_hive = in_hive;
}

string Bee::getHealth()
{
	return health;
}

void Bee::setHealth(string health)
{
	this->health = health;
}

int Bee::getLifetime()
{
	return lifetime;
}

void Bee::setLifetime(int lifetime)
{
	this->lifetime = lifetime;
}

int Bee::getAge()
{
	return age;
}

void Bee::setAge(int age)
{
	if (age >= 1 && age <= lifetime)
	{
		this->age = age;
	}
	
}

double* Bee::getDailyHoneyHistory()
{
	return dailyHoneyHistory;
}

void Bee::setDailyHoneyHistory(double* dailyHoneyHistory, int lifetime)
{
	this->dailyHoneyHistory = dailyHoneyHistory;
	this->lifetime = lifetime;

}




	

	Bee::Bee(string type, string behaviour, bool in_hive, string health, int lifetime, int age)
	{
		this->type = type;
		this->behavior = behaviour;
		this->in_hive = in_hive;
		this->health = health;
		this->lifetime = lifetime;
		this->age = age;
		dailyHoneyHistory = new double[lifetime];
		for (int i = 0; i < lifetime; i++)
		{
			dailyHoneyHistory[i] = 0.0;
		}
	}

	Bee::Bee(const Bee& bee) : Bee(bee.type, bee.behavior, bee.in_hive,
		bee.health, bee.lifetime, bee.age)
	{
		for (int i = 0; i < lifetime; i++)
		{
			dailyHoneyHistory[i] = bee.dailyHoneyHistory[i];
		}
	}

	Bee::~Bee()
	{
		delete[] dailyHoneyHistory;
	}

	

	string Bee::toString()
	{
		string s = "Type: " + this->type;
		s += ", behavior: " + this->behavior
			+ ",is in hive: " + (this->in_hive ? "yes" : "no")
			+ ", health: " + this->health
			+ ", lifetime: " + to_string(this->lifetime) + " days"
			+ ", age:" + to_string(this->age) + " days"
			+ ", daily honey: " + "\n" + this->convert()
			+ " ----> "
			+ "produced honey: " + to_string(getHoney()) + "\n";



		return s;
	}

	double Bee::getHoney()
	{
		double total = 0.0;

		for (int i = 0; i < this->age; i++)
		{
			total += this->dailyHoneyHistory[i];

		}

		return total;
	}

	double Bee::getDailyHoney(int index)
	{
		if (lifetime == 0 || index < 0
			|| index >= lifetime)
		{
			return -1;
		}

		return dailyHoneyHistory[index];
	}

	void Bee::setDailyHoney(int index, double dailyHoney)
	{
		if (lifetime == 0 || index < 0
			|| index >= lifetime || dailyHoney < 0)
		{
			return;
		}

		dailyHoneyHistory[index] = dailyHoney;
	}

