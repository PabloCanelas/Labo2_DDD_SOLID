#pragma once
#include "Animal.h"

//CLASE ABSTRACTA
class Mamifero
{
public:
	Mamifero();
	~Mamifero();
	void setLeche(string leche);
	void virtual mostrarTipoDeLeche() = 0;

private:
	string tipoDeLeche;

};

Mamifero::Mamifero()
{
}

Mamifero::~Mamifero()
{
}

void Mamifero::setLeche(string leche) {
	tipoDeLeche = leche;
}
