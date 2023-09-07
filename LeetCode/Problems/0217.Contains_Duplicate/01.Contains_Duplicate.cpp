/*
	DESC : Contains Duplicate
		LEET CODE : https://leetcode.com/problems/contains-duplicate/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash_map;

        for(int i = 0; i < nums.size(); i++) {
            if(hash_map.find(nums[i]) != hash_map.end() ) {
                return true;
            }
            hash_map[nums[i]] = i;
        }
        return false;
    }
};

/*

[1,2,3,1]

KEY		INT
1		1
2		1
3		1
1 is present so duplicate exist

*/