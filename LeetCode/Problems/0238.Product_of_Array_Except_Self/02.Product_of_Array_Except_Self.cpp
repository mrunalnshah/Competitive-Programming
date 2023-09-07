/*
	DESC : Product of Array Except Self
		LEET CODE : https://leetcode.com/problems/product-of-array-except-self/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int left_product[nums.size()];
        int right_product[nums.size()];

        left_product[0] = 1;
        for(int i = 1; i < nums.size(); i++) {
            left_product[i] = nums[i - 1] * left_product[i - 1];
        }

        right_product[nums.size() - 1] = 1;
        for(int i = nums.size() - 2 ; i >= 0 ; i--) {
            right_product[i] = nums[i + 1] * right_product[i + 1];
        }

        for(int i = 0 ; i < nums.size(); i++) {
            result.push_back(left_product[i] * right_product[i]);
        }
        return result;
    }
};
/*
INPUT	4 	5 	1 	8 	2 
L   :   1   4   20  20  160
R	:   80  16  16   2   1

P    :  80  64  320  40  160

INPUT        

 
*/