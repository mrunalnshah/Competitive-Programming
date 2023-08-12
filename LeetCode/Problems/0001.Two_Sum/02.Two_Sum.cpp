/*
	DESC : Two Sum
		LEET CODE : https://leetcode.com/problems/two-sum/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


// https://leetcode.com/problems/two-sum/solutions/3790366/c-solution-o-n-2-memory-efficient-and-o-n-time-efficient/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_map;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int difference = target - nums[i];
            if(hash_map.find(difference)!= hash_map.end()){
                return {hash_map[difference],i};
            }
            hash_map[nums[i]]=i;
        }
        return {};
    }
};