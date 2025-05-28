#include "Hive.h"

Hive::Hive()
{
	list = nullptr;
	count = 0;
}

Hive::Hive(int count)
{
	this->count = count;

	if (count > 0)
	{
		list = new Bee[count];
	}
	else
	{
		list = nullptr;
	}
	
}

Hive::Hive(Bee* list, int count)
{

	if (count > 0 && list != nullptr)
	{
		this->count = count;
		list = new Bee[count];

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
	else
	{
		list = nullptr;
		this->count = 0;
	}


}
Hive::~Hive()
{
	if (list != nullptr)
	{
		delete[] list;
	}
}

Bee& Hive::get(int index)
{
	if (count > 0 && index >= 0 && index < count)
	{
		return list[index];
	}
}
void Hive::set(int index, Bee bee)
{
	if (count > 0 && index >= 0 && index < count)
	{
		list[index] = bee;
	}
}
int Hive::getCount()
{
	return count;
}
void Hive::add(Bee bee)
{
	if (list != nullptr && count > 0)
	{
		list[count] = bee;
		count++;
	}
}
void Hive::remove(Bee bee)
{
	for (int i = 0; i < count; i++)
	{
		if (list[i].getType() == bee.getType()
			&& list[i].getAge() == bee.getAge()
			&& list[i].getBehavior() == bee.getBehavior()
			&& list[i].isInHive() == bee.isInHive()
			&& list[i].getHealth() == bee.getHealth()
			&& list[i].getLifetime() == bee.getLifetime())
		{
			for (int j = i + 1; j < count; j++)
			{
				list[j - 1] = list[j];
			}
			count--;
			break;
		}

	}
}


void Hive::remove(int index)
{

	for (int i = index + 1; i < count; i++)
	{
		list[i - 1] = list[i];
		count--;
		break;
	}
}
void Hive::clear()
{
	count = 0;
}
bool Hive::isEmpty()
{
	return count == 0;
}
string Hive::toString()
{
	string s = "";

	if (list != nullptr && count > 0)
	{
		for (int i = 0; i < count; i++)
		{
			s += list[i].toString() + "\n";
		}
	}
	else
	{
		s = "List is empty.";
	}

	return s;
}