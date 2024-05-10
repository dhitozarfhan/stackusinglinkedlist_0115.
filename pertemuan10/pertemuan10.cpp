#include <iostream>

using namespace std;

// node class representing a single node iin the linked list 
class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};
	
// Stack class
class Stack {
private:
	Node* top; // pointer to the node of the stuck

public:
	Stack() {
		top = NULL;
	}
};