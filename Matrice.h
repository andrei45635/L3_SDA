#pragma once
#include <iterator>
#include "LSI.h"

/*class IteratorMatrice {
private:
	IteratorLSI it;
	int index = 0;

public:
	friend class Matrice;
	Matrice mat;
	IteratorMatrice() = default;
	IteratorMatrice(const Matrice& m): mat{m} {};
	IteratorMatrice iterator(int linie) const;
	~IteratorMatrice() = default;
	int elem();
};*/

class Matrice {

private:
	/* aici e reprezentarea */
	int linii;
	int cols;

public:

	//constructor
	//se arunca exceptie daca nrLinii<=0 sau nrColoane<=0
	Matrice(int nrLinii, int nrColoane);

	//struct Node* creeazaNod(int linie, int col, TElem);

	//destructor
	~Matrice();

	LSI lsi = LSI();

	//returnare element de pe o linie si o coloana
	//se arunca exceptie daca (i,j) nu e pozitie valida in Matrice
	//indicii se considera incepand de la 0
	TElem element(int i, int j);


	// returnare numar linii
	int nrLinii() const;

	// returnare numar coloane
	int nrColoane() const;


	// modificare element de pe o linie si o coloana si returnarea vechii valori
	// se arunca exceptie daca (i,j) nu e o pozitie valida in Matrice
	TElem modifica(int i, int j, TElem);

	friend class IteratorMatrice;

};







