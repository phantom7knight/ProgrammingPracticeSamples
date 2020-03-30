#include "../../Helper Functions/Helper.hpp"

//class Example;


class Example
{

private:

	static Example* m_instance ;

public:

	Example(const Example& arg) = delete; // Copy constructor
	Example(const Example&& arg) = delete;  // Move constructor
	Example& operator=(const Example& arg) = delete; // Assignment operator
	Example& operator=(const Example&& arg) = delete; // Move operator



	Example()
	{
		
	}
	
	~Example()
	{
		if (m_instance)
			delete m_instance;
	}


	static Example* getInstance()
	{
		if (m_instance == NULL)
			m_instance = new Example();

		return m_instance;
	}

	void Print()
	{
		STDPRINTLINE("Hello World!");
		return;
	}

};

Example* Example::m_instance = nullptr;



int main()
{
	
	Example::getInstance()->Print();
	Example* newone = new Example();

	newone->Print();

	return 0;
}