/*
	DESC : Group Anagrams
		LEET CODE : https://leetcode.com/problems/group-anagrams/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        for (const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());

            map[sortedStr].push_back(str);
        }

        for (const auto& group : map) {
            result.push_back(group.second);
        }

        return result;
    }
};





/*

	"eat","tea","tan","ate","nat","bat"

HASH MAP
	KEY    VECTORS OF STRING
	aet		eat -> tea -> ate
	ant		tan -> nat
	abt		bat
	
	
IT is O(N KlogK)
	N is number of strings
	K is maximum character in all Strings
*/