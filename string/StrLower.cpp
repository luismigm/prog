#include "strLower.h"

void strLower::transMinuscula()//transforma en minúscula la cadena M_ptr
{
	char *cadAux=getM_ptr();
	for(int i=0; i<getM_size()-1 ; i++)
	{
		if( (cadAux[i] >= 'A') && (cadAux[i] <= 'Z' ))
		{
			cadAux[i]+=32;
		}
	}
}