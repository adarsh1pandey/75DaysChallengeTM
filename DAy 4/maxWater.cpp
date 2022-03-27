#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int ans=0,n=height.size(),i=0,j;
        j=n-1;

    while(i<j){
        ans=max(ans,(j-i)*min(height[i],height[j]));
        if(height[i]>height[j]) j--;
        else i++;
    }
    
    return ans;
    }
};  
