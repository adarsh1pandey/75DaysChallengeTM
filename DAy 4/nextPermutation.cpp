#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int mx = INT_MIN, n = nums.size();
		for (int i = n - 1; i >= 0 ; i--) {
			if (mx > nums[i]) {
				mx = INT_MAX;
				int mxi = -1;
				for (int j = i + 1; j < n; j++) {
					if (nums[j] > nums[i] && nums[j] < mx) {
						mx = nums[j];
						mxi = j;
					}
				}
				swap(nums[i], nums[mxi]);
				sort(nums.begin() + i + 1, nums.end());
                return;
			} else mx = max(mx, nums[i]);
		}
        sort(nums.begin(), nums.end()); 
    }
};