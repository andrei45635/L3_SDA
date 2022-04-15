#include "Node.h"
#include <iostream>

Node::Node(int linie, int coloana, int val) {

	this->linie = linie;
	this->coloana = coloana;
	this->val = val;
	this->next = nullptr;
}

Node::~Node() {

}