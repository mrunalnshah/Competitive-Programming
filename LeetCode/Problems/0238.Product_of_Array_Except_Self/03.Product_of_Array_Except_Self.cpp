/*
	DESC : Product of Array Except Self
		LEET CODE : https://leetcode.com/problems/product-of-array-except-self/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        for(int i = 1; i < nums.size(); i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }
        for(int i = nums.size() - 1, suffixProd = 1; i >= 0; i--) {
            result[i] *= suffixProd;
            suffixProd *= nums[i];
        }
        return result;
    }
};


/*
INPUT 	: -1		1		0		-3			3

RESULT 	: 0			0		9		0			0

//SAME AS 02 but More like a Space and Time Efficient both. while 02. is time efficient. 01. is better but not upto the question

*/