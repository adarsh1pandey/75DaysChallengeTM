#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-1;i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            else{
                int rem = -1*nums[i];
                int l = i+1;
                int r = n-1;
                while(l<r){
                    if(nums[l]+nums[r] < rem)
                        l++;
                    else if(nums[l]+nums[r] > rem)
                        r--;
                    else{
                        ans.push_back({nums[i],nums[l],nums[r]});
                        if(nums[l] == nums[r])
                            break;
                        else{
                            int x = nums[l];
                            int y = nums[r];
                            while(x == nums[l])
                                l++;
                            while(y == nums[r])
                                r--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};