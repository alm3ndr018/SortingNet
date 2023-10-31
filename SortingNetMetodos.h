#include "SortingNet.h"

//------------------- //
// -- CLASE HIJA B -- //
// ------------------ //
class SortingNetB : public SortingNet{
	public:
		SortingNetB(int);
		// Constuctor
		void sortB();
		// Método que ordena con el método burbuja
		
};

// Constructor hijo B
SortingNetB::SortingNetB(int len) : SortingNet(len){
	// Se llama al contructor hijo y se le dice que ya tiene heredada la longitud
}

void SortingNetB::sortB(){
	len = this->len;
	// se guarda la longitud para simplificar el código
	vector<int> a(len);
	a = this->a;
	// se crea a que es el vector auxiliar de this->a
	for(int i = 0; i < (len - 1); i++){
		for(int j = i + 1; j < (len - 1); j++){
			if (a[i] > a[j]) swap(i, j, a);
			// si el siguiente es menor, se intercambian
			// el vector ya se asigna en la función swap
		}
	}
}

//--------------------- //
// -- CLASE HIJA RED -- //
// -------------------- //
class SortingNetRed : public SortingNet{
	public:
		SortingNetRed(int);
		// Constructor
		void sortRed();
		// Método que ordena con el método de redes
};

// Constructor hijo red
SortingNetRed::SortingNetRed(int len) : SortingNet(len){
	// Se llama al contructor hijo y se le dice que ya tiene heredada la longitud
}

void SortingNetRed::sortRed(){
	// asumimos que tiene 6 valores
	vector<int> a(len);
	a = this->a;
	// se crea a que es el vector auxiliar de this->a
	// 1
	if(a[0]>a[1]) swap(0, 1, a);
	if(a[2]>a[3]) swap(2, 3, a);
	if(a[4]>a[5]) swap(4, 5, a);
	// 2
	if(a[0]>a[2]) swap(0, 2, a);
	if(a[3]>a[5]) swap(3, 5, a);
	// 3
	if(a[1]>a[4]) swap(1, 4, a);
	// 4
	if(a[0]>a[1]) swap(0, 1, a);
	if(a[2]>a[3]) swap(2, 3, a);
	if(a[4]>a[5]) swap(4, 5, a);
	// 5
	if(a[1]>a[2]) swap(1, 2, a);
	if(a[3]>a[4]) swap(3, 4, a);
	// 6
	if(a[2]>a[3]) swap(2, 3, a);
	
	this->a = a;
	// una vez se ha ordenado el vector auxiliar, se asigna al original
}
