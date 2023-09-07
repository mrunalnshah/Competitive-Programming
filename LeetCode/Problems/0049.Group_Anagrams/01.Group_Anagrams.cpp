/*
	DESC : Group Anagrams
		LEET CODE : https://leetcode.com/problems/group-anagrams/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

// IT IS A SOLUTION BUT NOT TIME EFFICIENT.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int valid[strs.size()];
        for(int i = 0; i < strs.size(); i++){
            valid[i] = 0;
        }

        vector<vector<string>> result;

        for(int i = 0; i < strs.size(); i++) {
            vector<string> temp;
            for(int j = 0; j < strs.size(); j++) {
                int is_valid = 1;
                if(strs[i].size() == strs[j].size()) {
                    unordered_map<char,int> map;
                    for(int k = 0; k < strs[i].size(); k++) {
                        map[strs[i][k]]++;
                        map[strs[j][k]]--;
                    }
                    for(auto x : map) {
                        if(x.second != 0) {
                            is_valid = 0;
                            break;
                        }
                    }

                    if(valid[i] == 0) {
                        valid[i] = 1;
                        temp.push_back(strs[i]);
                    }
                    if(valid[j] == 0 && is_valid == 1) {
                        valid[j] = 1;
                        temp.push_back(strs[j]);
                    }
                }
            }
            if(!temp.empty()) {
                result.push_back(temp);
            }

        }
        return result;
    }
};

/*

"eat","tea","tan","ate","nat","bat"

valid[0-strings] = 0

i = 0 to string length
	j = 0 to string length
		for eat and tea
		key 	amount of char
		e		0
		a		0
		t		0
		
		therefore pushback eat if valid = 0 and then assign valid = 1
				  pushback tea if valid = 0 and then assign valid = 1
		
		repeat for eat and tan
		key		amount of char
		e		1
		a		0
		t		0
		n		1
		
		not all amount of char are 0 so its not an Anagram. therefore continue.
	pushback temp into result
change i++
	repeat process.
	
	
	
IT IS O(n^3)
		
*/