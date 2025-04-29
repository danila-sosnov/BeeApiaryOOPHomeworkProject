#include "BeeApiary.h"
#include <time.h>

class Initializer
{
public:

	void init(Bee*& list, int count)
	{
		srand(time(nullptr));

		if (list == nullptr || count > 0)
		{
			list = new Bee[count];
		}


		string types[]{ "worker", "drone", "queen", "guard" };
		string behaviours[]{ "idle", "working", "defending", "feeding",
		"building", "cleaning"};
		string healths[]{ "healthy", "sick", "injured", "weak", "dead"};
		
		int lifetimes[]{ 35, 60, 1800, 35 };

		int minAge = 1;

		for (int i = 0; i < count; i++)
		{
			list[i].type = types[rand() % 3];

			list[i].lifetime = lifetimes[rand() % 3];

			list[i].age = rand() % (list[i].lifetime - minAge + 1) + minAge;

			list[i].in_hive = rand() % 2;

			list[i].behavior = behaviours[rand() % 5];

			list[i].health = healths[rand() % 4];

			list[i].dailyHoney = 0.2 + (rand() % 1801) / 1000.0;

			

		}
	}
};
