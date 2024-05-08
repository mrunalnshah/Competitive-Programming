/*
    Author : Mrunal Nirajkumar Shah
    Date   : 8th of May,2024

    LeetCode : https://leetcode.com/problems/shuffle-the-array/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp;
        for(int i = 0; i < nums.size() / 2 ; i++){
            temp.push_back(nums[i]);
            temp.push_back(nums[i+n]);
        }
        return temp;
    }
};

int main(){
    vector<int> nums = {1,2,3,4,4,3,2,1};
    Solution temp;

    nums = temp.shuffle(nums, 4);

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

	return 0;
}