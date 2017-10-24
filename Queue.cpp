#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(){
	this->size = 8;
	this->count = 0;
	this->item = new int [size]();
}

void Queue::enqueue(int item){
	this->item[count++] = item;
}

void Queue::dequeue(){
	for(int i=0; i<size; i++){
		this->item[i]=this->item[i+1];
	}
	count--;
}

int Queue::peek(){
	return this->item[0];
}

void Queue::display(){
	//cout << "{";
	for(int i=0; i<count; i++){
			cout << this->item[i] << " ";
	}
	//cout << "}";
}

Queue::~Queue(){

}
