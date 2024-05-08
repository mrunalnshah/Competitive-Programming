/*
    Author : Mrunal Nirajkumar Shah
    Date   : 7th of May,2024

    LeetCode : https://leetcode.com/problems/remove-element/
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                temp.push_back(nums[i]);
            }else{
                continue;
            }
        }
        nums = temp;
        return nums.size();
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,7,8,}; 
    Solution temp;
    int size = temp.removeElement(nums, 7);

    cout << "Size is " << size << endl;

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
	
	return 0;
}
