#include "ArrayList.h"

ArrayList::ArrayList()
{
	list = nullptr;
	size = 0;
}
ArrayList::~ArrayList()
{
	clear();
}

void ArrayList::add(Bee bee)
{
	if (isEmpty()) {
		size = 1;
		list = new Bee[size];
		list[0] = bee;
	}
	else {
		Bee* temp = new Bee[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = bee;
		delete[] list;
		list = temp;
		size++;
	}
}
//void ArrayList::add(int index, Bee bee)
//{
//	if (isEmpty()) {
//		size = 1;
//		list = new Bee[size];
//		list[0] = bee;
//	}
//	else if (index < 0 || index >= size) {
//		return;
//	}
//	else {
//		size++;
//		Bee* temp = new Bee[size];
//
//		for (int i = 0, j = 0; j < size; j++)
//		{
//			if (i != index) {
//				temp[j] = list[i];
//				i++;
//			}
//			else {
//				temp[j] = bee;
//			}
//		}
//
//		delete[] list;
//		list = temp;
//		size++;
//	}
//}
void ArrayList::addAll(Bee* bees, int size)
{
	for (int i = 0; i < size; i++)
	{
		add(bees[i]);
	}
}
void ArrayList::remove()
{
	remove(size - 1);
}
void ArrayList::remove(int index)
{
	if (!isEmpty()) {
		
		Bee* temp = new Bee[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
				
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}
void ArrayList::clear()
{
	if (list != nullptr) {
		delete[] list;
		list = nullptr;
		size = 0;
	}
}
bool ArrayList::isEmpty() const
{
	return size == 0;
}
Bee& ArrayList::get(int index)
{

	if (index < 0 || index >= size)
		throw std::out_of_range("Invalid index in ArrayList::get");
	return list[index];
	/*if (!isEmpty() && index >= 0 && index < size) {
		return list[index];
	}

	throw std::out_of_range("Invalid index in ArrayList::get");*/
}
void ArrayList::set(int index, Bee bee)
{

	if (index < 0 || index >= size)
		throw std::out_of_range("Invalid index in ArrayList::set");
	list[index] = bee;
	/*if (!isEmpty() && index >= 0 && index < size) {
		list[index] = bee;
	}*/
}
int ArrayList::getSize() const
{
	return size;
}
string ArrayList::toString() const
{
	string s = "List is empty.";

	if (!isEmpty()) {
		s = "";

		for (int i = 0; i < size; i++)
		{
			s += list[i].toString() + " ";
		}
	}

	return s;
}
