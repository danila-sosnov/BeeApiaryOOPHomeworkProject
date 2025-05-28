#include "ArrayList.h"

class Hive
{

private:

	ArrayList list;
public:

	Hive();
	~Hive();

	Bee& get(int index);
	void set(int index, Bee bee);
	int getCount();
	void add(Bee bee);
	void remove(Bee bee);
	void remove(int index);
	void clear();
	bool isEmpty();
	string toString();


};