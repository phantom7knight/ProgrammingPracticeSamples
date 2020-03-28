
//=================================================================================================
//Template Example
//=================================================================================================

//template<typename T>
//T power(T t, unsigned int n)
//{
//	T result = T(1);
//
//	for (int i = 0; i < n; ++i)
//	{
//		result *= t;
//	}
//
//	return result;//std::pow(t, n);
//}
//
//template<typename T, int num>
//class Power
//{
//	T power_here;
//public:
//
//	T Get(T num)
//	{
//		T result = T(1);
//		for (int i = 0; i < power_here; ++i)
//		{
//			result *= num;
//		}
//
//		return result;
//	}
//
//	Power<T,num>()
//	{
//		power_here = num;
//		
//	}
//
//};
//
//class C
//{
//	int a;
//public:
//
//	C(int i) :a(i) {}
//	C() : a(10)
//	{
//
//	}
//
//	int operator*(const C& rhs)
//	{
//		return a * rhs.a;
//	}
//
//
//
//};
//
//int main()
//{
//	int i = 2;
//	int result = power(i, 3);
//
//	double y = 3;
//	int result2 = power(y, 3);
//
//	Power<int, 3> cube;
//
//	int result3 = cube.Get(10);
//
//	STDPRINTLINE(result3);
//
//	Power<double, 2> square;
//
//	double result4 = square.Get(1.2);
//
//	STDPRINTLINE(result4);
//
//
//	return 0;
//}
