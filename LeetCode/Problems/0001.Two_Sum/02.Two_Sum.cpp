/*
	DESC : Two Sum
		LEET CODE : https://leetcode.com/problems/two-sum/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


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

/*
[2,7,11,15], target = 9

	difference = target - nums[index]
	
	HASHMAP
	KEY 	INDEX
9 - 2 = 7 in hashmap , no
	2		0
9 - 7 = 2 in hashmap , YES
	
	return {hash_map[difference], i}
	
	
	
return{}

*/