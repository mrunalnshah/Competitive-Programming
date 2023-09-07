/*
	DESC : Product of Array Except Self
		LEET CODE : https://leetcode.com/problems/product-of-array-except-self/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int product = 1;
        int zeroCount = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                zeroCount++;
                continue;
            }
            product = product * nums[i];
        }

        for(auto x : nums) {
            if(zeroCount > 1) {
                result.push_back(0);
            }else if(zeroCount == 1 && x != 0){
                result.push_back(0);
            }else if(x == 0){
                result.push_back(product);
            }else {
                result.push_back(product / x);
            }
        }
        return result;
    }
};

/*

product to multiple each element except zero
zeroCount : to check how many zeros
	if zero == 1 then one value will be except zero
		zero > 1 then all values will be zero
		if no zeros then no value will be equal to zero
		
first for loop to get product of all elements except zeros and also get zerocount

second for loop
	1. if zeroCount > 1 then push_back 0 for all elements
	2. if zeroCount == 1 & x != 0 then push_back 0
	3. if x == 0 then push_back product
	4. if nothing of above meets condition then push_back product / x

return result;
*/