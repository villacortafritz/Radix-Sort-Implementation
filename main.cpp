#include <iostream>
#include "queue.h"
#include "arrayq.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
 
	Queue q;
	Arrayq w;
	
	cout << "Testing queue:\n";
	cout << "Enqueue: ";
	
	q.enqueue(170);
	q.enqueue(45);
	q.enqueue(75);
	q.enqueue(90);
	q.enqueue(802);
	q.enqueue(2);
	q.enqueue(24);
	q.enqueue(66);
	q.display();
	
	q.dequeue();
	cout << "\nDequeue: ";
	q.display();
	q.dequeue();
	cout << "\nDequeue: ";
	q.display();
	
	cout << "\n\nTesting Array of Queue:\n";
	cout << "1st Pass:\n";
	w.add(170);
	w.add(45);
	w.add(75);
	w.add(90);
	w.add(802);
	w.add(2);
	w.add(24);
	w.add(66);
	w.display();

	cout << "\n\n2nd Pass:\n";
	w.sort();
	w.display();
	
	
	
	
	return 0;
}
