#include "../../../Helper Functions/Helper.hpp"


//=================================================================================================
//Lambda function example
//=================================================================================================




int main()
{
	int m = 0;
	int n = 0;

	int Tcase = 4;

	switch (Tcase)
	{
	case 0:
	{
		[&, n](int a) mutable { m = ++n + a; }(15);
		//notes
		//[&,n] we send m by reference
		//(int a) -> this is the arg list which we want to send in the Lambda fn.
		//(15) is the value of arg 'a'.
		std::cout << m << std::endl << n << std::endl;
	}
		break;
	case 1:
	{
		[=](int a) mutable {m = ++n + a; }(10);
		std::cout << m << std::endl << n << std::endl;
	}
	break;


	{
		int aa = 5;
		auto Increment = [&] {
			++aa;
		};

		STDPRINTLINE("The value of a which was 5 is inserted into Increment Lambda expr");
		STDPRINTLINE("new value of a is");
		Increment();
		STDPRINTLINE(aa);
	}
	break;

	case 3:
	{
		auto checkGreater = [](int a, int b)
		{
			//std::swap(a, b);

			if (a > b)
			{
				STDPRINTLINE("A is bigger");
			}
			else
			{
				STDPRINTLINE("B is bigger");
			}
		};
		checkGreater(5, 15);
	}
	break;

	case 4:
	{
		std::vector<int> vec_here;

		//Push data into the vector
		for (int i = 0; i < 12; ++i)
		{
			vec_here.push_back(i);
		}

		//Lambda expr to find data which is even
		std::for_each(vec_here.begin(), vec_here.end(), [=](int num) {
			if (num % 2 == 0)
			{
				STDPRINTLINE(num);
			}

			});

	}
	break;

	}

	return 0;
}