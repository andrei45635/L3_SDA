#include "Matrice.h"
#include <exception>
#include <iostream>
#include <cassert>

using namespace std;

Matrice::Matrice(int m, int n) {
	/* de adaugat */
	if (m <= 0 || n <= 0) {
		throw exception("date invalide\n");
	}
	else {
		this->linii = m;
		this->cols = n;
		LSI lsi;
	}
}

int Matrice::nrLinii() const {
	/* de adaugat */
	return this->linii;
}

int Matrice::nrColoane() const {
	/* de adaugat */
	return this->cols;
}

//returnare element de pe o linie si o coloana
//se arunca exceptie daca (i,j) nu e pozitie valida in Matrice
//indicii se considera incepand de la 0
TElem Matrice::element(int i, int j) {
	/* de adaugat */
	/*
	* CF: 0(1)
	* CD: 0(i*j)
	* CM: 0(i*j)
	* CG: O(i*j)
	*/
	if (i < 0 || j < 0 || i > this->linii || j > this->cols) {
		throw exception("date invalide\n");
	}
	if (this->lsi.cautare(i, j) == true) {
		TElem elem = this->lsi.getElem(i, j);
		return elem;
	}
	else return NULL_TELEMENT;
}

// modificare element de pe o linie si o coloana si returnarea vechii valori
// se arunca exceptie daca (i,j) nu e o pozitie valida in Matrice
TElem Matrice::modifica(int i, int j, TElem e) {
	/* de adaugat */
	/*
	* CF: 0(1)
	* CD: 0(i*j)
	* CM: 0(i*j)
	* CG: O(i*j)
	*/
	if (i < 0 || j < 0 || i > this->linii || j > this->cols) {
		throw exception("date invalide\n");
	}
	else if (e != 0) {
		TElem elem = this->lsi.modify(i, j, e);
		return elem;
	}
	else return NULL_TELEMENT;
}

Matrice::~Matrice() {
	/*
	* CF: 0(1)
	* CD: 0(i*j)
	* CM: 0(i*j)
	* CG: O(i*j)
	*/
	Node* temp = lsi.head;
	while (temp != nullptr) {
		Node* urm = temp->next;
		delete temp;
		temp = urm;
	}
}

/*int IteratorMatrice::elem() {
	return mat.element(this->mat.linii, this->mat.cols);
}

IteratorMatrice IteratorMatrice::iterator(int linie) const {
	//
	* CF: 0(linie)
	* CD: 0(linie)
	* CG: 0(linie)
	* CM: 0(linie)
	//
	if (linie < 0) {
		throw exception("invalid\n");
	}
	else {
		IteratorLSI iter = mat.lsi.begin();
		IteratorLSI iter_end = mat.lsi.end();
		for (iter; iter != iter_end; ++iter) {
			cout << iter.element() << " ";
		}
	}
}

void testIterator() {
	Matrice m(4, 4);
	assert(m.nrLinii() == 4);
	assert(m.nrColoane() == 4);
	IteratorMatrice iter;
	iter.iterator(3);
}*/

/* 
* pseudocod
* daca linie < 0
*	@exceptie
* altfel
*	IteratorLSI iter <- mat.lsi.begin()
*	IteratorLSI iter_end <- mat.lsi.end()
*	pentru iter, iter != iter_end, ++iter
*		scrie iter.element()
*	sf_pentru
* sf_daca
*/
