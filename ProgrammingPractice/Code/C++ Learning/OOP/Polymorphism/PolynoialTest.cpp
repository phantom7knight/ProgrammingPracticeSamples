
#include "../../../../Helper Functions/Helper.hpp"


//=================================================================================================
//Polynomial Test
//=================================================================================================


class Poly
{
public:
	void Print() const
	{
		PRINT_LINE << c[0] << " + ";

		if (d >= 1)
		{
			PRINT_LINE << c[1] << "x + ";
		}

		for (int pos = 2; pos < d; ++pos)
		{
			PRINT_LINE << c[pos] << "x^" << pos << " + ";
		}

		PRINT_LINE << c[d] << "x^" << d;

	}

	Poly()
	{
	}

	Poly(int a_degree)
	{
		d = a_degree;
		c = new int[d];
	}

	~Poly()
	{
		delete[] c;
		c = nullptr;
	}

	int& operator[](int a_left)
	{
		return c[a_left];
	}
	
	int operator()(int a_arg)
	{
		int res = 0;
		for (int i = 0; i <= d; ++i)
		{
			res += (c[i] * ((a_arg) ^ i));
		}

		return res;
	}

	//Copy Constructor
	Poly(const Poly &a_ptr)
	{
		d = a_ptr.d;
		
		c = a_ptr.c;


	}

	void operator=(const Poly& a_ptr)
	{
		d = a_ptr.d;

		c = a_ptr.c;

	}

	Poly operator*(const Poly& a_ptr)
	{
		int new_deg = d * a_ptr.d;
		Poly temp(new_deg);

		for (int i = 0; i <= a_ptr.d; i++)
		{
			for (int j = 0; j <= d; j++)
			{
				temp.c[i + j] += temp.c[i] * c[j];
			}
		}

		return temp;

	}

private:
	int d;
	int* c;

protected:
	int power(int b, int p)
	{
		int res = 1;
		while (p--)
		{
			res *= b;
		}
		return res;
	}
};

int main()
{
	Poly p1(2);
	p1[0] = 1;
	p1[1] = 2;
	p1[2] = 1;

	p1.Print();
	PRINT_LINE << END_LINE;
	PRINT_LINE << p1(3) << END_LINE;

	Poly p2(3);
	p2[0] = 1;
	p2[1] = 3;
	p2[2] = 3;
	p2[3] = 1;

	p2.Print();
	PRINT_LINE << END_LINE;
	PRINT_LINE << p2(1) << END_LINE;
	
	Poly p3(p1);
	p3.Print();
	PRINT_LINE << END_LINE;

	p3 = p2;
	p3.Print();
	PRINT_LINE << END_LINE;

	Poly p4 = p1 * p2;
	p4.Print();
	PRINT_LINE << END_LINE;


	return 0;

}
