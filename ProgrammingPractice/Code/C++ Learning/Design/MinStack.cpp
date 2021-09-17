#include "../../../Helper Functions/Helper.hpp"


class MinStack {
public:
    MinStack()
    {
    }

    void push(int x) 
    {
        if (x < min)
        {
            min = x;
        }

        stack.push_back(x);
        ++stackTop;
    }

    void pop() 
    {
        if (min == stack[stackTop])
        {
            min = INT_MAX;
        }

        stack.erase(stack.begin() + stackTop);
        --stackTop;
    }

    int top() 
    {
        if (stackTop == -1)
        {
            return 0;
        }

        return stack[stackTop];
    }

    int getMin() 
    {
        return *std::min_element(stack.begin(),stack.end());
    }

private:
    int min = INT_MAX;
    int stackTop = -1;
    STDVECTOR(int) stack;
};

int main()
{
    STDPRINTLINE("Hello World!");

    MinStack* obj = new MinStack();
 
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    int param_1 = obj->getMin();
    obj->pop();
    int param_2 = obj->top();
    int param_4 = obj->getMin();

    STDVECTOR(std::string) testing = fizzBuzz(15);

    BREAKPOINTTEMPVAR;

    return 0;
}