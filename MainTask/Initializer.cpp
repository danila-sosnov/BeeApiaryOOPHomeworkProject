#include "Initializer.h"

	void Initializer::init(Hive& hive)
	{
		srand((unsigned)time(0));

		if (hive.getCount() <= 0 )
		{
			return;
		}


		string types[]{ "worker", "drone", "queen", "guard" };
		string behaviours[]{ "idle", "working", "defending", "feeding",
		"building", "cleaning" };
		string healths[]{ "healthy", "sick", "injured", "weak", "dead" };

		int lifetimes[]{ 35, 60, 1800 };

		int minAge = 1;

		for (int i = 0; i < hive.getCount(); i++)
		{
			hive.get(i).setType(types[rand() % 3]);

			hive.get(i).setLifetime(lifetimes[rand() % 2]);

			hive.get(i).setAge(rand() % (hive.get(i).getLifetime() - minAge + 1) + minAge);

			hive.get(i).setInHive(rand() % 2);

			hive.get(i).setBehavior(behaviours[rand() % 5]);

			hive.get(i).setHealth(healths[rand() % 4]);

			for (int j = 0; j < hive.get(i).getLifetime(); j++)
			{
				if (j < hive.get(i).getAge())
				{
					hive.get(i).setDailyHoney(j, 0.2 + (rand() % 1801) / 1000.0);
				}


			}


		}
	}
