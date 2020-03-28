
//=================================================================================================
//Overloading example
//=================================================================================================

//class A
//{
//private:
//	int data[10];
//
//public:
//	A()
//	{
//		for (int i = 0; i < 10; ++i)
//		{
//			data[i] = i + 1;
//		}
//	}
//
//	int Get(int i) const
//	{
//		return data[i];
//	}
//
//};
//
//template<typename Sez>
//int sumFirst10(Sez s)
//{
//	int t = 0;
//	
//	for (int i = 0; i < 10; ++i)
//	{
//		t += s[i];
//	}
//
//	return t;
//
//}
//
////Making this class work with A class
//class Adaptor
//{
//public:
//	Adaptor(A a)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			data[i] = a.Get(i);
//		}
//	}
//
//	int operator[](int i)
//	{
//		return data[i];
//	}
//
//private:
//	int data[10];
//};
//
//
//int main()
//{
//	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sum1 = sumFirst10(array);
//
//	STDPRINTLINE(sum1);
//	
//	A a;
//
//	//Make this work was the question
//	int sum2 = sumFirst10(Adaptor(a));
//
//	STDPRINTLINE(sum2);
//
//	return 0;
//
//}

