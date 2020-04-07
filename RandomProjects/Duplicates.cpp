#include <vector>
#include <iostream>
#include <algorithm>
/*
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
*/
using namespace std;

int removeDuplicates(vector<int>& nums) {
    //iterate through the loop and search for duplicates
    /*
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            nums.erase(nums.begin() + i);
            i--;// repositioning i after deletion 
        }
    }
    return nums.size();
    */
    
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    return nums.size();
}