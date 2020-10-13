#pragma once
#include <iostream>
#include <string>

using namespace std;
class Producto
{
public:
	Producto();
	~Producto();
	int getPrecio();
	void setPrecio(int precio);
	string getDescripcion();
	void setDescripcion(string descripcion);
	bool getDisponibilidad();
	void setDisponibilidad(bool precio);
	void mostrarProducto();

private:
	string descripcionProducto;
	int precioProducto;
	bool disponibilidadProducto;

};

Producto::Producto()
{
}

Producto::~Producto()
{
}

int Producto::getPrecio()
{
	return precioProducto;
}

void Producto::setPrecio(int precio)
{
	precioProducto = precio;
}

string Producto::getDescripcion()
{
	return descripcionProducto;
}

void Producto::setDescripcion(string descripcion)
{
	descripcionProducto = descripcion;
}

bool Producto::getDisponibilidad()
{
	return disponibilidadProducto;
}

void Producto::setDisponibilidad(bool disponibilidad)
{
	disponibilidadProducto = disponibilidad;
}

void Producto::mostrarProducto() {
	string dispo;
	if (disponibilidadProducto == 1) {
		dispo = "si";
	}
	else dispo = "no";
	cout << descripcionProducto << ", " << "Precio: " << precioProducto << "bs, Disponible: " << dispo<<endl;
}