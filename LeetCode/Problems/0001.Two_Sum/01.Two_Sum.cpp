/*
	DESC : Two Sum
		LEET CODE : https://leetcode.com/problems/two-sum/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};

/*
	for i = 0 to size of nums array
		for j = i + 1 to size of nums array
			if nums[i] + nums[j] == target
				return {i,j}

	return {}
*/