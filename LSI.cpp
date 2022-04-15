#include "LSI.h"
#include <iostream>

LSI::LSI() {
	head = nullptr;
	size = 0;
}

bool LSI::valid() {
	if (size <= 0) {
		return false;
	}
	else return true;
}

bool LSI::cautare(int i, int j) {
	/*
	* CF: 0(1)
	* CD: 0(i*j)
	* CM: O(i*j)
	* CG: O(i*j)
	*/
	if (valid()) {
		Node* temp = head;
		while (temp != nullptr) {
			if (temp->linie == i && temp->coloana == j) {
				return true;
			}
			temp = temp->next;
		}
	}
	else return false;
}

TElem LSI::modify(int i, int j, int new_val) {
	/*
	* CF: 0(1)
	* CD: 0(i*j)
	* CM: O(i*j)
	* CG: O(i*j)
	*/
	int check = 0;
	if (valid()) {
		Node* current = head;
		while (current->next != nullptr) {
			if (current->linie == i && current->coloana == j) {
				check = 1;
				TElem old_val = current->val;
				current->val = new_val;
				return old_val;
			}
			current = current->next;
		}
		if (current->linie == i && current->coloana == j) {
			check = 1;
			TElem old_val = current->val;
			current->val = new_val;
			return old_val;
		}
		if (check == 0) {
			current->next = new Node(i, j, new_val);
			current->next->linie = i;
			current->next->coloana = j;
			current->next->val = new_val;
			Node* test = head;
			current->next->next = nullptr;
			this->size++;
		}
	}
	else {
		head = new Node(i, j, new_val);
		head->linie = i;
		head->coloana = j;
		head->val = new_val;
		head->next = nullptr;
		this->size++;
		return NULL_TELEMENT;
	}
}

TElem LSI::getElem(int linie, int coloana) {
	/*
	* CF: 0(1)
	* CD: 0(i*j)
	* CM: O(i*j)
	* CG: O(i*j)
	*/
	Node* temp = head;
	while (temp != nullptr) {
		if (temp->linie == linie && temp->coloana == coloana) {
			return temp->val;
		}
		temp = temp->next;
	}
}

/*IteratorLSI LSI::begin() const {
	return IteratorLSI(*this);
}

IteratorLSI LSI::end() const {
	return IteratorLSI(*this, size);
}

IteratorLSI& IteratorLSI::operator++() {
	next();
	return(*this);
}


IteratorLSI IteratorLSI::operator++(int) {
	IteratorLSI temp = *this;
	++it;
	return temp;
}

IteratorLSI& IteratorLSI::operator--() {
	--it;
	return(*this);
}


IteratorLSI IteratorLSI::operator--(int) {
	IteratorLSI temp = *this;
	--it;
	return temp;
}


int IteratorLSI::next() {
	it++;
}


bool IteratorLSI::operator==(const IteratorLSI& ot) {
	return it == ot.it;
}

bool IteratorLSI::operator!=(const IteratorLSI& ot) {
	return !(*this == ot);
}

TElem& IteratorLSI::element() {
	LSI lista;
	
}

TElem& IteratorLSI::operator*() {
	return element();
}

bool IteratorLSI::valid() const{
	return it > 0;
}*/