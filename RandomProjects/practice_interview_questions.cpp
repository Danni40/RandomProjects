#include <climits>
#include <algorithm>
#include <vector>
using namespace std;
/*
You are given an integer array nums. The value of this array is defined as the sum of |nums[i]-nums[i+1]| for all 0 <= i < nums.length-1.

You are allowed to select any subarray of the given array and reverse it. You can perform this operation only once.

Find maximum possible value of the final array.

 

Example 1:

Input: nums = [2,3,1,5,4]
Output: 10
Explanation: By reversing the subarray [3,1,5] the array becomes [2,5,1,3,4] whose value is 10.
Example 2:

Input: nums = [2,4,9,24,2,1,10]
Output: 68
*/

int maxValueAfterReverse(vector<int>& a) {
	int sum = 0, maxMin = INT_MAX, minMAX = INT_MIN, res = 0;
	for (int i = 1; i < a.size(); i++) {
		sum += abs(a[i] - a[i - 1]);
		maxMin = std::min(maxMin, std::max(a[i], a[i - 1]));
		minMAX = std::max(minMAX, std::min(a[i], a[i - 1]));
	}
	res = sum + std::max(0, (minMAX - maxMin) * 2);

	int t1 = 0, t2 = 0, n = a.size();
	for (int i = 1; i < n - 1; i++) {
		t1 = std::max(t1, abs(a[i + 1] - a[0]) - abs(a[i + 1] - a[i]));
		t2 = std::max(t2, abs(a[n - i - 1] - a[n - 1]) - abs(a[n - i - 1] - a[n - i]));
	}
	return std::max(res, sum + std::max(t1, t2));
};