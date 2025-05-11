#include "BeeApiary.h"
#include <time.h>

class Initializer
{
public:

	void init(Bee*& list, int count)
	{
		srand(time(nullptr));

		if (list == nullptr && count > 0)
		{
			list = new Bee[count];
		}


		string types[]{ "worker", "drone", "queen", "guard" };
		string behaviours[]{ "idle", "working", "defending", "feeding",
		"building", "cleaning" };
		string healths[]{ "healthy", "sick", "injured", "weak", "dead" };

		int lifetimes[]{ 35, 60, 1800 };

		int minAge = 1;

		for (int i = 0; i < count; i++)
		{
			list[i].setType(types[rand() % 3]);

			list[i].setLifetime(lifetimes[rand() % 2]);

			list[i].setAge(rand() % (list[i].getLifetime() - minAge + 1) + minAge);

			list[i].setInHive(rand() % 2);

			list[i].setBehavior(behaviours[rand() % 5]);

			list[i].setHealth(healths[rand() % 4]);

			for (int j = 0; j < list[i].getLifetime(); j++)
			{
				if (j < list[i].getAge())
				{
					list[i].setDailyHoney(j, 0.2 + (rand() % 1801) / 1000.0);
				}
				
								
			}

			
		}
	}
};