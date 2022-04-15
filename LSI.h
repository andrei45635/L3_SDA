#pragma once

#include "Node.h"

#define NULL_TELEMENT 0

/*class IteratorLSI {
private:
	int it = 0;
public:
	friend class Matrice;
	IteratorLSI() = default;
	IteratorLSI(const Matrice& m);
	IteratorLSI& operator++();
	IteratorLSI operator++(int);
	IteratorLSI& operator--();
	IteratorLSI operator--(int);
	TElem& operator*();
	TElem& element();
	bool operator==(const IteratorLSI& ot);
	bool operator!=(const IteratorLSI& ot);
	int next();
	bool valid() const;
	~IteratorLSI() = default;
};*/

class LSI {
public:

	//constructor lista
	LSI();

	Node* head;
	int size;

	//cautare in matrice
	bool cautare(int i, int j);

	//modificare element
	TElem modify(int i, int j, int elem_nou);

	//getter pentru element
	TElem getElem(int linie, int coloana);

	//verificam daca lista e valida
	bool valid();

	/*friend class IteratorLSI;
	IteratorLSI begin() const;
	IteratorLSI end() const;*/
};