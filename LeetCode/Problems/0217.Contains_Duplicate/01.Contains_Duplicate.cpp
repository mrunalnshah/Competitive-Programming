/*
	DESC : Contains Duplicate
		LEET CODE : https://leetcode.com/problems/contains-duplicate/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


// https://leetcode.com/problems/contains-duplicate/solutions/3965479/c-solution-o-n-memory-efficient-and-o-n-time-efficient/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash_map;
        int result = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(hash_map.find(nums[i]) != hash_map.end() ) {
                return true;
            }
            hash_map[nums[i]] = i;
        }
        return false;
    }
};