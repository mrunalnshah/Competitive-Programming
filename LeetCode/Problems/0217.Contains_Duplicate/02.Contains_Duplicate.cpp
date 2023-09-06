/*
	DESC : Contains Duplicate
		LEET CODE : https://leetcode.com/problems/contains-duplicate/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for(pair<int,int> x : map) {
            if(x.second != 1) {
                return false;
            }
        }
        return true;
    }
};