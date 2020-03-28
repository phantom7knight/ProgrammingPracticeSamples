#include "../../stdafx.h"
//=================================================================================================
//Example for reallocation, deallocation and allocation of pointer
//=================================================================================================

//int* allocate(int size)
//{
//	return new int[size];
//}
//
//
//void reallocate(int *arr, int dim)
//{
//	realloc(arr, dim);
//}
//
//void deallocate(int *arr)
//{
//	
//	delete[] arr;
//
//}
//
//
//int main()
//{
//	int *a = allocate(12);
//
//	for (int i = 0; i < 12; ++i)
//	{
//		a[i] = i;
//	}
//
//	STDPRINTLINE(a[5]);
//
//	reallocate(a, 12);
//
//	for (int i = 12; i < 24; ++i)
//	{
//		a[i] = i;
//	}
//
//	STDPRINTLINE(a[13]);
//
//	deallocate(a);
//
//
//	return 0;
//}