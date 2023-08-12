/*
	DESC : Two Sum
		LEET CODE : https://leetcode.com/problems/two-sum/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

// https://leetcode.com/problems/two-sum/solutions/3790366/c-solution-o-n-2-memory-efficient-and-o-n-time-efficient/


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