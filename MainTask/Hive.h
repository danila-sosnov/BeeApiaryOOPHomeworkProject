#include "Bee.h"
class Hive
{

private:

	Bee* list;
	int count;

public:

	Hive();
	Hive(int count);
	Hive(Bee* list, int count);
	~Hive();

	Bee get(int index);
	void set(int index, Bee bee);
	int getCount();
	void add(Bee bee);
	void remove(Bee bee);
	void remove(int index);
	void clear();
	bool isEmpty();
	string toString();


};

