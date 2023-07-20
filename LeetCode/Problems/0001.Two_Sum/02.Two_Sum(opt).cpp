/*
	DESC : Two Sum
		LEET CODE : https://leetcode.com/problems/two-sum/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> res(2);
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(mp.find(target - nums[i]) != mp.end() && mp[target - nums[i]] != i) {
                res[0] = i;
                res[1] = mp[target - nums[i]];
                return res;
            }
            mp[nums[i]] = i;
        }

        return res;
    }
};