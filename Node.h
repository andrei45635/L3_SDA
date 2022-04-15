#pragma once

typedef int TElem;

class Node {
public:
	int linie;
	int coloana;
	TElem val;
	Node* next;

	//constructor pentru nod
	Node(int linie, int coloana, int val);

	//destructor pentru nod
	~Node();
};