//=================================================================================================
//Operator Overloading Example
//=================================================================================================


//class Polynomial
//{
//public:
//	
//	void Print() const
//	{
//		STDPRINTLINE(coeffecients[0]);
//		if (degree >= 1)
//		{
//			STDPRINTLINE(coeffecients[1] << "x + ");
//		}
//
//		for (int pos = 1; pos < degree; ++pos)
//		{
//			STDPRINTLINE(coeffecients[pos] << "x^ " << pos << " + ");
//		}
//
//
//		STDPRINTLINE(coeffecients[degree] << "x^ " << degree);
//
//	}
//
//	Polynomial()
//	{
//
//	}
//
//	Polynomial(int deg) : degree(deg)
//	{
//		coeffecients = new int[degree];
//	}
//
//	Polynomial(Polynomial &a_rhs)
//	{
//		this->degree = a_rhs.degree;
//		
//		this->coeffecients = a_rhs.coeffecients;
//	}
//
//	int &operator[](const int& arg)
//	{
//		return coeffecients[arg];
//	}
//
//	int operator()(const int& arg)
//	{
//		int count = 0;
//
//		if (degree >= 1)
//		{
//			count += coeffecients[0] * arg;
//		}
//
//		for (int pos = 1; pos <= degree; ++pos)
//		{
//			count += coeffecients[pos] * std::pow(arg, pos);
//		}
//
//		return count;
//	}
//
//	void operator=(const Polynomial& a_rhs)
//	{
//		this->degree = a_rhs.degree;
//		this->coeffecients = a_rhs.coeffecients;
//	}
//
//
//	Polynomial operator *(const Polynomial& a_rhs)
//	{
//		Polynomial result(a_rhs.degree + this->degree);
//
//		for (int i = 0; i <= this->degree; ++i)
//		{
//			for (int j = 0; j <= a_rhs.degree; ++j)
//			{
//				result.coeffecients[i + j] = this->coeffecients[i] + coeffecients[j];
//			}
//		}
//
//		return result;
//
//	}
//
//
//private:
//
//	int degree;
//	int *coeffecients;
//
//protected:
//
//	int power(int a, int p)
//	{
//		int res = 1;
//		while (p--)
//		{
//			res *= a;
//		}
//		return res;
//	}
//};
//
//
//int main()
//{
//	Polynomial p1(2);
//
//	p1[0] = 1;
//	p1[1] = 2;
//	p1[2] = 1;
//
//	p1.Print();
//
//
//	Polynomial p2(3);
//
//	p2[0] = 1;
//	p2[1] = 3;
//	p2[2] = 3;
//	p2[3] = 1;
//
//	p2.Print();
//
//	STDPRINTLINE(p2(1));
//
//	Polynomial p3(p1);
//
//	p3.Print();
//
//	p3 = p2;
//
//	p3.Print();
//
//	Polynomial p4 = p1 * p2;
//
//	p4.Print();
//
//}
