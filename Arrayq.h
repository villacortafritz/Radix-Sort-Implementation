#ifndef ARRAYQ_H
#define ARRAYQ_H
#include <iostream>
#include "Queue.h"

using namespace std;

class Arrayq{
	private:
		Queue* list;
		int size;
		int pos(int item){return item%size;}
	public:
		Arrayq();
		//~Arrayq();
		void display();
		void add(int item);
		void sort();
};

#endif
