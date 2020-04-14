#include "../../../Helper Functions/Helper.hpp"


class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() :m_min(999), m_top(-1)
    {

    }
    
    ~MinStack()
    {

    }
    
    void push(int x) 
    {
        //check for the overflow
        if (m_top > 10) //10 is the limit for the stack
        {
            std::cout << "Overflow" << std::endl;
            return;
        }


        //push into the stack
        stack_arr[++m_top] = x;
       
    }

    void pop() 
    {
        //check for the underflow
        if (m_top == -1)
        {
            std::cout << "underflow" << std::endl;
            return;
        }

        //pop out of the stack
        stack_arr[m_top] = 999;
        --m_top;

    }

    int top() 
    {
        return stack_arr[m_top];
    }

    int getMin() 
    {
        int res = 0;

        /*int res_arr[10] = {9999};

        for (int i = 0; i <= m_top; ++i)
        {
            res_arr[i] = stack_arr[i];
        }

        std::sort(res_arr, res_arr + (int)( sizeof(res_arr) / sizeof(res_arr[0])) );

        res = res_arr[0];*/




        return res;
    }


private:
    int m_min;
    int m_top;

    int stack_arr[10];

};

//["MinStack","push","push","push","push","getMin","pop","getMin","pop","getMin","pop","getMin"]
//[[], [2], [0], [3], [0], [], [], [], [], [], [], []]

int main()
{
	STDPRINTLINE("Hello World!");

    MinStack* obj = new MinStack();

    obj->push(0);
    obj->push(2);
    obj->push(0);
    obj->push(3);

    int param_4 = obj->getMin();

    STDPRINTLINE(param_4);

    obj->pop();

    param_4 = obj->getMin();

    STDPRINTLINE(param_4);

    obj->pop();

    param_4 = obj->getMin();

    STDPRINTLINE(param_4);
    
    obj->pop();

    param_4 = obj->getMin();

    STDPRINTLINE(param_4);


    /*obj->push(0);
    obj->push(NULL);
    obj->push(NULL);
    obj->push(NULL);
    obj->push(NULL);
    obj->push(NULL);
    obj->push(NULL);
    obj->push(NULL);
    
    
    obj->pop();
    
    
    int param_4 = obj->getMin();*/

  

    if (obj)
        delete obj;


	return 0;
}