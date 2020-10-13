#pragma once
#pragma once
#include <iostream>
#include <string>
#include "Producto.h"
using namespace std;

class Animal
{
public:
	Animal();
	~Animal();
	void mostrarProductosDeAnimal();
	string getRaza();
	void setRaza(string raza);
	int getPrecio();
	void setPrecio(int precio);
	int getEdad();
	void setEdad(int edad);
	bool getDisponibilidad();
	void setDisponibilidad(bool disponibilidad);
	void insertarProductoNuevo(Producto nuevo);
	void mostrarAnimal();
private:
	Producto productosParaAnimal[10];
	string raza;
	int precio;
	int edad;
	bool disponibilidad;
	int iterador;
};

Animal::Animal()
{
	iterador = 0;
}

Animal::~Animal()
{

}

void Animal::mostrarProductosDeAnimal() {
	for (int i = 0; i < iterador; i++)
		productosParaAnimal[i].mostrarProducto();
}

string Animal::getRaza() {
	return raza;
}
void Animal::setRaza(string raza){
	this->raza = raza;
}
int Animal::getPrecio() {
	return precio;
}
void Animal::setPrecio(int precio) {
	this->precio = precio;
}
int Animal::getEdad() {
	return edad;
}
void Animal::setEdad(int edad) {
	this->edad = edad;
}
bool Animal::getDisponibilidad() {
	return disponibilidad;
}
void Animal::setDisponibilidad(bool disponibilidad) {
	this->disponibilidad = disponibilidad;
}
void Animal::insertarProductoNuevo(Producto nuevo) {
	if (iterador < 10) {
		productosParaAnimal[iterador] = nuevo;
		iterador++;
	}
	
}

void Animal::mostrarAnimal() {
	string dispo;
	if (disponibilidad == 1) {
		dispo = "si";
	}
	else dispo = "no";
	cout << "Raza: " << raza << ", Precio: " << precio << "bs, Disponibilidad: " << dispo<<endl;
	cout << "PRODUCTOS: " << endl;
	mostrarProductosDeAnimal();
}