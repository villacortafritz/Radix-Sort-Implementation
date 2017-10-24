#include <iostream>
#include "Arrayq.h"
#include "Queue.h"

using namespace std;

Arrayq::Arrayq(){
	list = new Queue[10];
	this->size = 10;
}

void Arrayq::add(int item){
	this->list[pos(item)].enqueue(item);
}

void Arrayq::display(){
	for(int i=0; i<this->size; i++){
		cout << "Index[" << i << "]: ";
		list[i].display();
		cout<<"\n";
	}
	for (int i=0; i<this->size; i++){
		list[i].display();
	}
}

void Arrayq::sort(){
	
}
