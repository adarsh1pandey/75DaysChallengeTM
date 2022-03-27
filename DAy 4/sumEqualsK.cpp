#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0)
            return 0;
        unordered_map<int, int> mp;
        int count = 0;
        int currSum = 0;
        int i = 0;
        
        while(i < n)
        {
            currSum += nums[i];
            if (currSum == k)
                count += 1;
            if (mp.find(currSum - k) != mp.end())
            {
                count += mp[currSum - k];
            }
            mp[currSum] += 1;
            i++;
        }
        return count;
    }
};