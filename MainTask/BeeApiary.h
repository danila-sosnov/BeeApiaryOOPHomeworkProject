#include <iostream>
using namespace std;
#include <string>

class Bee
{
private:
	string type;
	string behavior;
	bool in_hive;
	string health;
	int lifetime;
	int age;
	double* dailyHoneyHistory;

	string convert();

public:


	Bee() : Bee("worker", "idle", true, "healthy", 35, 1) {}
	Bee(string type, int age) : Bee(type, "idle", true, "healthy", 35, age) {}
	Bee(string type, string behaviour, bool in_hive, string health, int lifetime, int age);
	Bee(const Bee& bee);
	~Bee();

	string getType();
	void setType(string type);
	string getBehavior();
	void setBehavior(string behavior);
	bool isInHive();
	void setInHive(bool in_hive);
	string getHealth();
	void setHealth(string health);
	int getLifetime();
	void setLifetime(int lifeTime);
	int getAge();
	void setAge(int age);
	double getDailyHoney(int index);
	void setDailyHoney(int index, double dailyHoney);
	double* getDailyHoneyHistory();
	void setDailyHoneyHistory(double* dailyHoneyHistory, int lifetime);



	
		
	string toString();
	double getHoney();
	
};