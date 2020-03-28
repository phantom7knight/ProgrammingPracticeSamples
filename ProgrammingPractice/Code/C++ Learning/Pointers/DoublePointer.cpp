
//=================================================================================================
//Testing sizes on X86 & X64 architechture's for a pointer and structs
//=================================================================================================

#include "../../stdafx.h"

int main()
{
	STDPRINTLINE("Hello World!");

	//int double pointer
	int** dptr;

	//make an array out of it
	dptr = new int*[10];

	for (int i = 0; i < 10; ++i)
	{
		dptr[i] = new int();
	}

	dptr[0][10] = 15;

	return 0;

}