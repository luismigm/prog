#pragma once
#include "str.h"
class strLower : public Str
{
public:
	strLower(char* cad) : Str(cad)//constructor que pasa un char* al constructor padre, se ejecuta primero el constructor del padre y luego el de la clase heredada
	{
		transMinuscula();
	}
	 void print()//m�todo print compartido para usar herencia y m�todos virtuales
	 {
		 cout << "hija " << getM_ptr() << endl;
	 }
private:
	void transMinuscula();//transforma en min�scula la cadena M_ptr
};