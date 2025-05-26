#include "Hive.h"

Hive::Hive() {}

Hive::Hive(int count)
{
	for (int i = 0; i < count; i++)
	{
		list.add(Bee());
	}
}

Hive::Hive(Bee* list, int count)
{

	if (count > 0 && list != nullptr)
	{
		
		for (int i = 0; i < count; i++)
		{
			add(list[i]);
		}
	}
	
	
}
Hive::~Hive()
{
	clear();
}

Bee Hive::get(int index)
{
	return list.get(index);
}

void Hive::set(int index, Bee bee)
{
	list.set(index, bee);
}

int Hive::getCount()
{
	return list.getSize();
}

void Hive::add(Bee bee)
{
	list.add(bee);
}

void Hive::remove(Bee bee)
{	
	list.remove();	
}

void Hive::remove(int index)
{
	list.remove(index);
}

void Hive::clear()
{
	list.clear();
}

bool Hive::isEmpty()
{
	return list.isEmpty();
}

string Hive::toString()
{
	return list.toString();
}


