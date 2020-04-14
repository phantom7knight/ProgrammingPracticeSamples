#include "../../../../Helper Functions/Helper.hpp"


class Poly
{
public:
	virtual void Print() const
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

	virtual int& operator[](int a_left)
	{
		return c[a_left];
	}

	virtual int operator()(int a_arg)
	{
		int res = 0;
		for (int i = 0; i <= d; ++i)
		{
			res += (c[i] * ((a_arg) ^ i));
		}

		return res;
	}

	//Copy Constructor
	Poly(const Poly& a_ptr)
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



class BoundedPolynomial : public Poly
{
private:
	int boundValue = 0;
	int degree = 0;
	int *coeff = 0;

public:
	BoundedPolynomial(): boundValue(0), degree(0), coeff(NULL)
	{
	}

	BoundedPolynomial(int a_degree, int a_boundValue) : degree(a_degree), boundValue(a_boundValue)
	{
		coeff = new int[degree];
	}

	int& operator[](int a_left)
	{
		return coeff[a_left];
	}

	int operator()(int a_arg)
	{
		int res = 0;
		for (int i = 0; i <= degree; ++i)
		{
			int pow_here = power(a_arg, i);
			res += (coeff[i] * (pow_here));
		}

		if (res > boundValue)
		{
			res = boundValue;
			return res;
		}

		return res;
	}

	void Print() const
	{
		PRINT_LINE << coeff[0] << " + ";

		if (degree >= 1)
		{
			PRINT_LINE << coeff[1] << "x + ";
		}

		for (int pos = 2; pos < degree; ++pos)
		{
			PRINT_LINE << coeff[pos] << "x^" << pos << " + ";
		}

		PRINT_LINE << coeff[degree] << "x^" << degree;

	}

};



int main()
{
	BoundedPolynomial p1(2, 10);
	p1[0] = 1; p1[1] = 2; p1[2] = 1;
	p1.Print(); std::cout << std::endl; // 1 + 2x + 1x^2
	std::cout << p1(3) << std::endl; // 10
	BoundedPolynomial p2(3, 10);
	p2[0] = 1; p2[1] = 3; p2[2] = 3; p2[3] = 1;
	p2.Print(); std::cout << std::endl; // 1 + 3x + 3x^2 + 1x^3
	std::cout << p2(1) << std::endl; // 8
	BoundedPolynomial p3(p1);
	p3.Print(); std::cout << std::endl; // 1 + 2x + 1x^2
	p3 = p2;
	p3.Print(); std::cout << std::endl; // 1 + 3x + 3x^2+1x^3



	return 0;
}