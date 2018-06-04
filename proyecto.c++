#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

class Electrodomestico{
private: 
	int id;
	float precioBase, peso;
	string color;
	char consumoEnergetico;

public:
	Electrodomestico();
	Electrodomestico(float precioBase, float peso);
	Electrodomestico(int id, float precioBase, float peso, string color, char consumoEnergetico);

	void setId(int id);
	int getId();
	void setPrecioBase(float precioBase);
	float getPrecioBase();
	void setPeso(float peso);
	float getPeso();
	void setColor(string color);
	string getColor();
	void setConsumoEnergetico(char consumoEnergetico);
	char getConsumoEnergetico();

	void mostrarDatos();
	float precioFinal();
};

Electrodomestico::Electrodomestico(){
	id = 1;
	precioBase = 100.0;
	peso = 5.0;
	color = "blanco";
	consumoEnergetico = 'F';
}

Electrodomestico::Electrodomestico(float precioBase, float peso){
	id = 1;
	this -> precioBase = precioBase;
	this -> peso = peso;
	color = "blanco";
	consumoEnergetico = 'F';
}

Electrodomestico::Electrodomestico(int id, float precioBase, float peso, string color, char consumoEnergetico){
	this -> id = id;
	this -> precioBase = precioBase;
	this -> peso = peso;
	this -> color = color;
	this -> consumoEnergetico = consumoEnergetico;
}

void Electrodomestico::setId(int id){
	this -> id = id;
}

int Electrodomestico::getId(){
	return id;
}

void Electrodomestico::setPrecioBase(float precioBase){
	this -> precioBase = precioBase;
}

float Electrodomestico::getPrecioBase(){
	return precioBase;
}

void Electrodomestico::setPeso(float peso){
	this -> peso = peso;
}

float Electrodomestico::getPeso(){
	return peso;
}

void Electrodomestico::setColor(string color){
	this -> color = color;
}

string Electrodomestico::getColor(){
	return color;
}

void Electrodomestico::setConsumoEnergetico(char consumoEnergetico){
	this -> consumoEnergetico = consumoEnergetico;
}

char Electrodomestico::getConsumoEnergetico(){
	return consumoEnergetico;
}

void Electrodomestico::mostrarDatos(){
	cout << "id: " << id << ", precio base: " << precioBase << "euros, peso: " << peso << "kg, color: " << color << ", consumo energetico: " << consumoEnergetico << "\n";
}

float Electrodomestico::precioFinal(){
	float precioFinal = 0;
	switch(consumoEnergetico){
		case 'A':
			precioFinal = precioBase + 100;
			break;
		case 'B':
			precioFinal = precioBase + 80;
			break;
		case 'C':
			precioFinal = precioBase + 60;
			break;
		case 'D':
			precioFinal = precioBase + 50;
			break;
		case 'E':
			precioFinal = precioBase + 30;
			break;
		case 'F':
			precioFinal = precioBase + 10;
			break;
	}
	return precioFinal;
}

class Lavadora : public Electrodomestico{
private:
	int carga;

public:
	Lavadora();
	Lavadora(float precioBase, float peso);
	Lavadora(int id, float precioBase, float peso, string color, char consumoEnergetico, int carga);

	void setCarga(int carga);
	int getCarga();

	void mostrarDatos();
	float precioFinal();
};

Lavadora::Lavadora(){
	Electrodomestico(1, 100.0, 5.0, "blanco", 'F');
	carga = 0;
}

Lavadora::Lavadora(float precioBase, float peso){
	Electrodomestico(1, precioBase, peso, "blanco", 'F');
	carga = 0;
}

Lavadora::Lavadora(int id, float precioBase, float peso, string color, char consumoEnergetico, int carga){
	Electrodomestico(id, precioBase, peso, color, consumoEnergetico);
	this -> carga = carga;
}

void Lavadora::setCarga(int carga){
	this -> carga = carga;
}

int Lavadora::getCarga(){
	return carga;
}

void Lavadora::mostrarDatos(){
	cout << "id: " << Electrodomestico::getId() << ", precio base: " << Electrodomestico::getPrecioBase() << "euros, peso: " << Electrodomestico::getPeso() << "kg, color: " << Electrodomestico::getColor() << ", consumo energetico: " << Electrodomestico::getConsumoEnergetico() << ", carga: " << carga << " kg \n";
}

float Lavadora::precioFinal(){
	float precioFinal = 0;
	if(carga > 30){
		switch(Electrodomestico::getConsumoEnergetico()){
		case 'A':
			precioFinal = Electrodomestico::getPrecioBase() + 100;
			break;
		case 'B':
			precioFinal = Electrodomestico::getPrecioBase() + 80;
			break;
		case 'C':
			precioFinal = Electrodomestico::getPrecioBase() + 60;
			break;
		case 'D':
			precioFinal = Electrodomestico::getPrecioBase() + 50;
			break;
		case 'E':
			precioFinal = Electrodomestico::getPrecioBase() + 30;
			break;
		case 'F':
			precioFinal = Electrodomestico::getPrecioBase() + 10;
			break;
		}
		return precioFinal + 50;
	}
	return precioFinal;
}

class Television : public Electrodomestico{
private:
	int resolucion;

public:
	Television();
	Television(float precioBase, float peso);
	Television(int id, float precioBase, float peso, string color, char consumoEnergetico, int resolucion);

	void setResolucion(int resolucion);
	int getResolucion();

	void mostrarDatos();
	float precioFinal();
};

Television::Television(){
	Electrodomestico(1, 100.0, 5.0, "blanco", 'F');
	resolucion = 0;
}

Television::Television(float precioBase, float peso){
	Electrodomestico(1, precioBase, peso, "blanco", 'F');
	resolucion = 0;
}

Television::Television(int id, float precioBase, float peso, string color, char consumoEnergetico, int carga){
	Electrodomestico(id, precioBase, peso, color, consumoEnergetico);
	this -> resolucion = resolucion;
}

void Television::setResolucion(int resolucion){
	this -> resolucion = resolucion;
}

int Television::getResolucion(){
	return resolucion;
}

void Television::mostrarDatos(){
	cout << "id: " << Electrodomestico::getId() << ", precio base: " << Electrodomestico::getPrecioBase() << "euros, peso: " << Electrodomestico::getPeso() << "kg, color: " << Electrodomestico::getColor() << ", consumo energetico: " << Electrodomestico::getConsumoEnergetico() << ", resolucion: " << resolucion << " pulgadas \n";
}

float Television::precioFinal(){
	float precioFinal = 0;
	if(resolucion > 40){
		switch(Electrodomestico::getConsumoEnergetico()){
		case 'A':
			precioFinal = Electrodomestico::getPrecioBase() + 100;
			break;
		case 'B':
			precioFinal = Electrodomestico::getPrecioBase() + 80;
			break;
		case 'C':
			precioFinal = Electrodomestico::getPrecioBase() + 60;
			break;
		case 'D':
			precioFinal = Electrodomestico::getPrecioBase() + 50;
			break;
		case 'E':
			precioFinal = Electrodomestico::getPrecioBase() + 30;
			break;
		case 'F':
			precioFinal = Electrodomestico::getPrecioBase() + 10;
			break;
		}
		return precioFinal + precioFinal * .30;
	}
	return precioFinal;
}

int main(){
	int id, carga, resolucion, opc = 0, size, index, subopc = 0;
	float precioBase, peso;
	string color;
	char consumoEnergetico;
	Electrodomestico electrodomesticos[50];

	while(opc != 4){
		cout << "Selecciona una opcion: \n";
		cout << "1. Agregar un electrodomestico. \n";
		cout <<	"2. Eliminar un electrodomestico. \n";
		cout <<	"3. Ver todos los electrodomesticos. \n";
		cout << "4. Salir. \n";
		cin >> opc;
		switch(opc){
			case 1:
				cout << "Selecciona un tipo: \n";
				cout << "1. Lavadora, 2. Television \n";
				cin >> subopc;
				if(subopc < 1 || subopc > 2){
					cout << "Error elija una opción correcta";
				}else{
					if(subopc == 1){
						Lavadora lavadora;
						lavadora.setId(index);
						cout << "Ingrese precio \n";
						cin >> precioBase;
						lavadora.setPrecioBase(precioBase);
						cout << "Peso: \n";
						cin >> peso;
						lavadora.setPeso(peso);
						cout << "Color: \n";
						cin >> color;
						lavadora.setColor(color);
						cout << "Consumo energético: (A, B, C, D, E, F) \n";
						cin >> consumoEnergetico;
						lavadora.setConsumoEnergetico(consumoEnergetico);
						cout << "Carga: \n";
						cin >> carga;
						lavadora.setCarga(carga);
						electrodomesticos[index] = lavadora;
					}else{
						Television television;
						cout << "Ingrese precio \n";
						cin >> precioBase;
						television.setPrecioBase(precioBase);
						cout << "Peso: \n";
						cin >> peso;
						television.setPeso(peso);
						cout << "Color: \n";
						cin >> color;
						television.setColor(color);
						cout << "Consumo energético: (A, B, C, D, E, F) \n";
						cin >> consumoEnergetico;
						television.setConsumoEnergetico(consumoEnergetico);
						cout << "Resolucion: \n";
						cin >> resolucion;
						television.setResolucion(resolucion);
						electrodomesticos[index] = television;
					}
				}
				index++;
				break;
			case 2:
				cout << "Ingrese el id del electrodomestico a eliminar:\n";
				cin >> id;
				for (int i = 0; i < 50; ++i){
					if(electrodomesticos[i].getId() == id){
						electrodomesticos[i].setId(-1);
					}
				}
				break;
			case 3:
				for(int i = 0; i < index; i++){
					if(electrodomesticos[i].getId() != -1)
						electrodomesticos[i].mostrarDatos();
				}
				break;
			case 4:
				cout << "Salir \n";
				break;
		}
	}
}