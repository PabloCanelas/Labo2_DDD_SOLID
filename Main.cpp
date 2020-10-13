#include <iostream>
using namespace std;
#include "Producto.h"
#include "Animal.h"
#include "ListaAnimales.h"
#include "PetShop.h"
#include "Mamifero.h"

//EJEMPLOS DE HERENCIA MULTIPLE Y POLIMORFISMO DE ANIMAL
//Clases heredadas:
class Perro: public Mamifero, public Animal {
public:
	Perro() {
	}
	~Perro() {
	}
	void mostrarTipoDeLeche() {
		cout << "Leche de cachorro " << endl;
	}
};

class Gato : public Mamifero, public Animal {
public:
	Gato() {
	}
	~Gato() {
	}
	void mostrarTipoDeLeche() {
		cout << "Leche de gatito " << endl;
	}
};

class Loro : public Animal {
public:
	Loro() {
	}
	~Loro() {
	}
};



int main() {
   //Creacion de productos para prueba
	Producto ComidaDePerro;
	ComidaDePerro.setDescripcion("Jugete para Perro");
	ComidaDePerro.setDisponibilidad(true);
	ComidaDePerro.setPrecio(100);

	Producto ComidaDeLoro;
	ComidaDeLoro.setDescripcion("Comida de gato bebe Le'Miau");
	ComidaDeLoro.setDisponibilidad(true);
	ComidaDeLoro.setPrecio(280);

	Producto ComidaDeGato;
	ComidaDeGato.setDescripcion("Torre para gato");
	ComidaDeGato.setDisponibilidad(true);
	ComidaDeGato.setPrecio(303);


	//Creacion de animales para prueba

	Loro Parava;
	Parava.setDisponibilidad(true);
	Parava.setEdad(1);
	Parava.setPrecio(1250);
	Parava.setRaza("Parava Azul");
	Parava.insertarProductoNuevo(ComidaDeLoro);


	Perro Dober;
	Dober.setDisponibilidad(true);
	Dober.setEdad(2);
	Dober.setPrecio(500);
	Dober.setRaza("Doberman");
	Dober.insertarProductoNuevo(ComidaDePerro);
	
	Gato Siames;
	Siames.setDisponibilidad(true);
	Siames.setEdad(2);
	Siames.setPrecio(400);
	Siames.setRaza("Siames");
	Siames.insertarProductoNuevo(ComidaDeGato);
	

	PetShop PS(5);
	PS.setDireccion("Hupper Mall");
	PS.setNombre("CANDOG");
	PS.setNumero(7737277);
	PS.insertarAnimal(Dober);
	PS.insertarAnimal(Parava);
	PS.insertarAnimal(Siames);
	
	PS.mostrarPetShop();

	getchar();
	return 0;
}