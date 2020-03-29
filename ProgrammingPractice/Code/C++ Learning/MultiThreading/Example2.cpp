#include "../../../Helper Functions/Helper.hpp"


void PrintCallback(int i)
{
	STDPRINTLINE(i);

	return;
}

int main()
{

	std::thread thread1(PrintCallback,15);
	std::thread thread2(PrintCallback,2);





	thread2.join();
	thread1.join();


	return 0;
}