#include "../../../Helper Functions/Helper.hpp"

class Solution 
{
public:
    Solution(STDVECTOR(int)& nums) 
    {
        original = nums;
    }

    /** Resets the array to its original configuration and return it. */
    STDVECTOR(int) reset() 
    {
        return original;
    }

    int radomnum(int i)
    {
        return rand() % i;
    }

    /** Returns a random shuffling of the array. */
    STDVECTOR(int) shuffle() 
    {
        STDVECTOR(int) res;
        res = original;

        std::random_shuffle(res.begin(), res.end());

        return res;
    }

    STDVECTOR(int) original;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */


int main()
{
	STDPRINTLINE("Hello World!");

    STDVECTOR(int) nums = { 1, 2, 3 };
    
    Solution* obj = new Solution(nums);

    STDVECTOR(int) res1 = obj->shuffle();

    STDVECTOR(int) res2 = obj->reset();

    BREAKPOINTTEMPVAR;


	return 0;
}