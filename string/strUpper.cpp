#pragma once
#include "strUpper.h"

void strUpper::transMayuscula()//transforma en mayúsuculas la cadena M_ptr
{
	char *cadAux=getM_ptr();
	for(int i=0; i<getM_size()-1 ; i++)
	{
		if( (cadAux[i] >= 'a') && (cadAux[i] <= 'z' ))
		{
			cadAux[i]-=32;
		}
	}
}
