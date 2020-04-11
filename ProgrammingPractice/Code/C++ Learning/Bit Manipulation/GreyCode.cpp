#include "../../../Helper Functions/Helper.hpp"


//=================================================================================================
//Grey Code
//=================================================================================================
/*

 Bit Shifting 101
 ================
 x<<y == x*2^y
 x>>y == x/2^y
 ^-XOR

 so
 1<<4 = 1*2^4 = 16
 1>>4 = 1 / 2^4 = 1/16

*/

void print_bits(const int& value, const int& size) {
	for (int i = size - 1; i >= 0; --i) {
		std::cout << (((1 << i) & value) ? "1" : "0");
		//std::cout << ( (1<<i) & value) ? "1":"0"; //wrong
	}
	std::cout << std::endl;
}

int main() {
	int size = 3;
	int num_total = 1 << size;
	int ffs(int i);


	//STDPRINTLINE("The total count is : " << num_total);

	for (int i = 0; i < num_total; ++i) {
		int half = i >> 1; //integer division uses floor for positive numbers
		int gray_code = i ^ half;
		STDPRINTLINE("The Grey Code value is : " << gray_code);
		print_bits(gray_code, size);
	}

	int r1 = 2 << 3;
	int r2 = 8 >> 3;
	int r3 = 1 ^ 2;

	STDPRINTLINE(r1);   
	STDPRINTLINE(r2);
	STDPRINTLINE(r3);

	return 0;
}


//=================================================================================================