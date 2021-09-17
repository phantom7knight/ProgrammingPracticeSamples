#include <vector>
#include <stdexcept>
#include <iostream>
#include <unordered_map>

class MovingTotal
{
public:

    void append(const std::vector<int>& list)
    {
        for (int i = 0; i < list.size(); ++i)
        {
            originalList.push_back(list[i]);
        }
    }

    bool contains(int total)
    {
        // base case
        if (originalList.size() < 3)
        {
            return false;
        }

        // check if this total is already found b4
        if (records.find(total) != records.end())
        {
            return true;
        }


        for (int i = 0; i < originalList.size(); ++i)
        {
            if (i + 2 >= originalList.size())
            {
                return false;
            }
            int sum = 0;
            sum = originalList[i] + originalList[i + 1] + originalList[i + 2];

            if (sum == total)
            {
                records[total] = true;
                return true;
            }
        }

        return false;
    }

private:
    std::vector<int> originalList;
    std::unordered_map<int, bool> records;
};

#ifndef RunTests
int main()
{
    MovingTotal movingTotal;

    std::vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    movingTotal.append(first);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;

    std::vector<int> second;
    second.push_back(5);
    movingTotal.append(second);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(12) << std::endl;
    std::cout << movingTotal.contains(7) << std::endl;


    std::vector<int> third;
    for (int i = 6; i < 500; ++i)
    {
        second.push_back(i);
    }
    movingTotal.append(third);

    std::cout << movingTotal.contains(6) << std::endl;
    std::cout << movingTotal.contains(9) << std::endl;
    std::cout << movingTotal.contains(80) << std::endl;
    std::cout << movingTotal.contains(117) << std::endl;
    std::cout << movingTotal.contains(112127) << std::endl;
    std::cout << movingTotal.contains(317) << std::endl;
    std::cout << movingTotal.contains(217) << std::endl;
    std::cout << movingTotal.contains(1117) << std::endl;
    std::cout << movingTotal.contains(114) << std::endl;
    std::cout << movingTotal.contains(157) << std::endl;

}
#endif