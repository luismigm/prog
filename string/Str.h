#pragma once
//#define SomeUniqueName
#include <iostream>

using namespace std;

class Str
{
protected:
	char* m_ptr; 
	unsigned int m_size; 
	unsigned int m_capacity; 
	public:
	Str();//constructor por defecto
	Str(const Str& cad);//costructor copia
	Str(const char* cad);//
	~Str();//destructor
	unsigned int calcSize(const char* cad);//calculamos el tamaño de una cadena
	void copyCad(const char* cad);//copiamos el contenido de una cadena a m_ptr;
	unsigned int getSize();//obtiene el tamaño
	Str operator=(const Str &c);//sobrecarga el método igual
	//ostream& print();
	virtual void print()//método print virtual, no lo podemos poner en el cpp por dar un error de linkado
	{
		cout << "padre " << m_ptr << endl;
	}
	char* getM_ptr();
	int getM_size();

};



//ostream& operator << (ostream &o, Str &s);
