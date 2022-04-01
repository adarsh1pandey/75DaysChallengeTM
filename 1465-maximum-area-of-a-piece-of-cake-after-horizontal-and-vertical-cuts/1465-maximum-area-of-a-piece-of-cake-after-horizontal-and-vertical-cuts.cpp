class Solution {
public:
    int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
         hCuts.push_back(h),vCuts.push_back(w);
        hCuts.push_back(0),vCuts.push_back(0);
        sort(hCuts.begin(),hCuts.end());
        sort(vCuts.begin(),vCuts.end());
        int h_max=INT_MIN,v_max=INT_MIN;
        for(int i=1;i<hCuts.size();++i)
            h_max=max(h_max,hCuts[i]-hCuts[i-1]);
        for(int i=1;i<vCuts.size();++i)
            v_max=max(v_max,vCuts[i]-vCuts[i-1]);
        return ((long)h_max*(long)v_max)%1000000007;
    }
};