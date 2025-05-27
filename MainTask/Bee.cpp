#include "Bee.h"


string Bee::convert()
{
	string s = "[";

	if (age > 0 && age <= lifetime)
	{
		for (int i = 0; i < age - 1; i++)
		{
			s += to_string(dailyHoneyHistory[i]) + ", ";
		}

		s += to_string(dailyHoneyHistory[age - 1]);
	}

	s += "]";

	return s;

}

Bee::Bee()
{
	type = "worker";
	behavior = "idle";
	in_hive = true;
	health = "healthy";
	lifetime = 1;
	age = 1;
	dailyHoneyHistory = new double[lifetime];
	dailyHoneyHistory[0] = 0.0;

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

	if (lifetime <= 0)
	{
		return;
	}

	delete[] dailyHoneyHistory;

	this->lifetime = lifetime;
	
	dailyHoneyHistory = new double[lifetime];

	for (int i = 0; i < lifetime; i++)
	{
		dailyHoneyHistory[i] = 0.0;
	}
	
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
	delete[] this->dailyHoneyHistory;

	this->lifetime = lifetime;

	this->dailyHoneyHistory = new double[lifetime];

	for (int i = 0; i < lifetime; i++)
	{
		this->dailyHoneyHistory[i] = dailyHoneyHistory[i];
	}

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

