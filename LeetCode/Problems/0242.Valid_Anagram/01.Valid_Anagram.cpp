/*
	DESC : Valid Anagram
		LEET CODE : https://leetcode.com/problems/valid-anagram/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        else {
            unordered_map<char, int> map;

            for (int i = 0; i < s.size(); i++) {
                map[s[i]]++;
                map[t[i]]--;
            }

            for (pair<char, int> x : map) {
                if (x.second) {
                    return false;
                }
            }
            return true;

        }
    }
};