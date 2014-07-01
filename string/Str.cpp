#include "Str.h"

Str::Str(const char* cad)//constructor
{
	m_size = 0;

	m_size = calcSize(cad);
	m_ptr = new char [m_size];
	copyCad(cad);
}
Str::Str(const Str& cad)//constructor copia
{
	m_ptr = new char[cad.m_size];
	m_size= cad.m_size;
	copyCad(cad.m_ptr);
}
Str::~Str()//destructor
{
	delete[] m_ptr;
}

/*ostream& Str::print()//método print que devuelve un flujo
{

	return  cout << "print padre " << m_ptr;
}*/
Str::Str()
{
	m_ptr = new char [100];
	m_ptr[0] = '\0';
}

unsigned int Str::getSize()
{
	return m_size-1;//en el tamaño de la cadena contamos el \0
}

unsigned int Str::calcSize(const char* cad)//calculamos el tamaño de la cadena
{
	int counter = 1;//el 1 es por el \0

	while(*cad != '\0')
	{
		++counter;
		++cad;
	}

	return counter;
}
void Str::copyCad(const char* cad)//función para copiar una cadena
{
	for (int i = 0; i < m_size; ++i)
	{
		m_ptr[i] = cad[i];
	}
	//m_ptr[m_size] = '\0';

}
Str Str::operator=(const Str& cad)//sobrecarga operador igual
{
	if(this != &cad) 
	{
		delete[] m_ptr;
		if(cad.m_ptr) 
		{
			m_ptr = new char[cad.m_size];
			m_size= cad.m_size;
			copyCad(cad.m_ptr);
		}
	}
   return *this;
}
char* Str::getM_ptr()//devolvemos M_ptr
{
	return m_ptr;
}
int Str::getM_size()//devolvemos M_size
{
	return m_size;
}


/***********************************************/
/*ostream& operator << (ostream &o, Str& s) //método usado para la sobrecarga del operador de flujo <<
{
    return s.print();
}*/


