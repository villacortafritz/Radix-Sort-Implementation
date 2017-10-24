#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

using namespace std;

class Queue{
	private:
		int size;
		int count;
		int *item;
	public:
		Queue();
		~Queue();
		void enqueue(int item);
		void dequeue();
		int peek();
		void display();
};

#endif


