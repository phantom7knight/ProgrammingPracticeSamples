#include "../../Helper Functions/Helper.hpp"




int findMaxSum1(const std::vector<int>& numbers)
{
    if (numbers.size() < 1)
    {
        return 0;
    }

    if (numbers.size() == 1)
    {
        return numbers[0];
    }

    std::vector<int> copy = numbers;

    std::sort(copy.begin(), copy.end());
    int res = copy[copy.size() - 1] + copy[copy.size() - 2];
    return res;

    //throw std::logic_error("Waiting to be implemented");
}

int findMaxSum(const std::vector<int>& numbers)
{
    int res = 0;

    int L = numbers[0];
    int LS = numbers[0];

    for (int i = 1; i < numbers.size(); ++i)
    {
        if (numbers[i] > LS && numbers[i] < L)
        {
            LS = numbers[i];
        }

        if (numbers[i] > LS && numbers[i] > L)
        {
            LS = L;
            L = numbers[i];
        }

    }

    res = L + LS;

    return res;
}

#ifndef RunTests
int main()
{
    std::vector<int> v{ 5, 9, 7, 11 };
    std::cout << findMaxSum1(v);

    return 0;
}
#endif