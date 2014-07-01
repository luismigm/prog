#include "str.h"
class strUpper : public Str
{
public:
	strUpper(char* cad) : Str(cad)//constructor que pasa un char* al constructor padre, se ejecuta primero el constructor del padre y luego el de la clase heredada
	{
		transMayuscula();
	}
 void print()//m�todo print compartido para usar herencia y m�todos virtuales
 {
	 cout << "hija " << getM_ptr() << endl;
 }
private:
	void transMayuscula();//transforma en may�suculas la cadena M_ptr
};