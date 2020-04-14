#include "../../Helper Functions/Helper.hpp"




class C { //do not modify this class
	int i;
public:
	C(int _i = 0) : i(_i) {}

	operator int() const 
	{ 
		return i; 
	}

	void Set(int _i) { i = _i; }
};



template <typename T>
class SmartPointer {
	//add code here
	C *c_obj;



public:
	//add code here
	SmartPointer(C* value_ptr): c_obj(value_ptr)
	{

	}
	~SmartPointer()
	{
		if (c_obj != NULL)
			delete c_obj;
	}


	C* operator->()
	{
		return c_obj;
	}

	int operator*()
	{
		return c_obj->operator int();
	}

	

};



//Make sure that class compiles

int main() { //do not modify this function
	SmartPointer<C> p(new C(100));
	p->Set(120);
	int i = *p; //i should be 120
	STDPRINTLINE(i);

}