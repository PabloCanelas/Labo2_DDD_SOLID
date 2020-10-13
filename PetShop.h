#pragma once
#include"ListaAnimales.h"
class PetShop
{
public:
	PetShop(int tam);
	~PetShop();
	void setNombre(string nom);
	void setDireccion(string dir);
	void setNumero(int num);
	void mostrarPetShop();
	void insertarAnimal(Animal A);
private:
	ListaAnimales *L;
	string nombrePetShop;
	string direccion;
	int numero;
};

PetShop::PetShop(int tam)
{
	L = new ListaAnimales(tam);
}

PetShop::~PetShop()
{
}

void PetShop::setNombre(string nom) {
	nombrePetShop = nom;
}
void PetShop::setDireccion(string dir) {
	direccion = dir;
}
void PetShop::setNumero(int num) {
	numero = num;
}
void PetShop::mostrarPetShop() {
	cout << "PetShop " << nombrePetShop << endl;
	cout << "info: telf " << numero << " direccion: " << direccion << endl;
	cout << "ANIMALES: " << endl;
	L->mostrarLista();

}
void PetShop::insertarAnimal(Animal A) {
	L->insertarAnimal(A);
}