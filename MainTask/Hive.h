#include "ArrayList.h"

class Hive
{

private:

	ArrayList list;
		
public:

	Hive();
	Hive(Bee* list, int count);
	~Hive();

	Bee& get(int index);
	void set(int index, Bee bee);
	void add(Bee bee);
	int getCount();
	void remove(Bee bee);
	void remove(int index);
	void clear();
	bool isEmpty();
	string toString();



};

