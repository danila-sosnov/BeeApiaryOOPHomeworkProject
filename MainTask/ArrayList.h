#include "main.h"
#include "Bee.h"
class ArrayList
{

private:

	Bee* list;
	int size;
	

public:

	ArrayList();
	~ArrayList();

	void add(Bee bee);
	/*void add(int index, Bee bee);*/
	void addAll(Bee* bees, int size);
	void remove();
	void remove(int index);
	void clear();
	bool isEmpty() const;
	Bee& get(int index);
	void set(int index, Bee bee);
	int getSize() const;
	string toString() const;

	};





