#include "SortingNetMetodos.h"

int main(){
	
	cout << "Comprobacion metodo burbuja" << endl;
	cout << "Introduzca 6 numeros: " << endl;
	SortingNetB vector1(6);
	// Esta clase permite cualquier tamaño
	vector1.input();
	// Se introducen valores
	vector1.print();
	// Se muestran
	vector1.sortB();
	// Se ordeanan
	vector1.print();
	// Se muestran los cambios
	
	cout << "Comprobacion metodo de redes" << endl;
	cout << "Introduzca 6 numeros: " << endl;
	SortingNetRed vector2(6);
	// Esta clase asume tamaño 6
	vector2.input();
	// Se introducen valores
	vector2.print();
	// Se muestran
	vector2.sortRed();
	// Se ordeanan
	vector2.print();
	// Se muestran los cambios
	
	return 0;
}
