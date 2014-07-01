#include "strLower.h"
#include "strUpper.h"

int main()
{
	//c�digo para probar la primera parte del ejercicio. Al probar la herencia con el m�todo print la sobrecarga del flujo 
	//de salida ya no nos sirve.
	/*Str myString("Ana");
	cout << myString << " con tama�o "<< myString.getSize() << endl;

	Str myString2("Juan");
	cout << myString2 << " con tama�o "<< myString2.getSize() << endl;

	myString=myString2;
	cout << "tras sobrecargar el operador = myString (" << myString << ") es una copia de myString2 (" << myString2 <<")" << endl;
	*/

	//distintas formas de probar la herencia y los m�todos virtuales
	strLower minuscula("AnAbeL");
	minuscula.print();//accedemos al print de la clase derivada
	minuscula.Str::print();//accedemos al print de la clase padre
	strUpper mayuscula("alFONsO");
	mayuscula.print();
	mayuscula.Str::print();

	strLower low("Pepe");
	strUpper upp("Pepe");
	Str *l = &low;
	Str *u = &upp;
	l->print();//a pesar de acceder a trav�s de un puntero a Str por las reglas de la herencia y la clase virtual accedemos al m�todo de las clases heredadas 
	u->print();

	return 0;
}