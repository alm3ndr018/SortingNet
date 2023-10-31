#include <iostream>
#include <vector>
using namespace std;

//------------------ //
// -- CLASE PADRE -- //
// ----------------- //
class SortingNet{
	protected:
		vector <int> a;
		// vector adimensional
		int len;
		// longitud del vector
		
	public:
		SortingNet(int len);
		// Constructor
		void input();
		// introduce los valores del vector
		void print();
		// muestra los valores del vector
		void swap(int, int, vector<int> &apa);
		// intercambia valores, ambos int representan las posiciones,
		// y la siguiente variable, el vector afectado
		// "apa" es un nombre cualquiera
		
};

// Constructor padre
SortingNet::SortingNet(int len){
	this->len = len;
	vector <int> a(len);
	// se crea un vector cualquiera del tamaño deseado
	this->a = a;
	// construimos el vector
} 

void SortingNet::input(){
	vector<int> lista(this->len);
	// se crea una lista auxiliar con longitud igual a la de clase
	for(int i = 0; i < this->len; i++){
		cin >> lista[i];
	}
	// se coloca 1 a 1 el contenido del vector
	this->a = lista;
	// se asigna la lista auxiliar al vector de la clase
	
}

void SortingNet::print(){
	for(int i = 0; i < (this->len); i++){
		cout << this->a[i] << " ";
	}
	cout << endl;
	// muestra el contenido del vector
}

void SortingNet::swap(int i, int j, vector<int> &a){
	// a es el vector auxiliar
	int aux = a[i];
	a[i] = a[j];
	a[j] = aux;
	this->a = a;
	// se asignan los cambios 
}

