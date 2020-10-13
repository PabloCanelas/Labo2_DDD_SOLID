#pragma once
#include "Animal.h"
class ListaAnimales
{
public:
	ListaAnimales(int tam);
	~ListaAnimales();
	void mostrarLista();
	void insertarAnimal(Animal A);
private:
	Animal *Lista;
	int tamLista;
	int indice;
};

ListaAnimales::ListaAnimales(int tam)
{
	tamLista = tam;
	indice = 0;
	Lista = new Animal[tamLista];
}

ListaAnimales::~ListaAnimales()
{
}

void ListaAnimales::mostrarLista() {
	for (int i = 0; i < indice; i++) {
		cout << i << ".- " << endl;
		Lista[i].mostrarAnimal();
	}
}
void ListaAnimales::insertarAnimal(Animal A) {
	if (indice < 20) {
		Lista[indice] = A;
		indice++;
	}
}