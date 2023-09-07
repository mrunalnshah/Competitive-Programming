/*
	DESC : Top K Frequent Elements
		LEET CODE : https://leetcode.com/problems/top-k-frequent-elements/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }

        vector<pair<int,int>> map_vector;

        for(auto x : map) {
            map_vector.push_back({x.second, x.first});
        }

        sort(map_vector.begin(),map_vector.end(),greater<pair<int,int> >());

        int count = 0;
        for(auto x : map_vector) {
            result.push_back(map_vector[count].second);
            count++;
            if(count == k) {
                break;
            }
        }

        return result;
    }
};

/*
[4,1,-1,2,-1,2,3]

KEY 		AMOUNT
4		1
1		1
-1		2
2		2
3		1

Store the HashMap in vectors as <AMOUNT,KEY>
SORT(THE VECTOR WITH AMOUNT)

LOOP THE map_vector for k times. and print map_vector.second which is KEY.


*/
