#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        vector<int> ans ;
        int maxr = A.size()-1;
        int maxc = A[0].size()-1;
        int m = A.size();
        int n = A[0].size();
        int tne = m*n;
        //cout<<tne<<endl;
        int count=0;
        int minr=0;
        int minc=0;
        while(count<tne){
        //top
        for(int i=minr,j=minc;j<=maxc&&count<tne;j++){
            ans.push_back(A[i][j]);
        //cout<<A[i][j]<<" ";
        count++;
        }
        minr++;
        //cout<<endl;
        //right
        for(int i=minr,j=maxc;i<=maxr&&count<tne;i++){
            ans.push_back(A[i][j]);
            //cout<<A[i][j];
            count++;
        }
        maxc--;
        //cout<<endl;
        //bottom
        for(int i=maxr,j=maxc;j>=minc&&count<tne;j--){
            ans.push_back(A[i][j]);
            //cout<<A[i][j];
            count++;
        }
        maxr--;
        //cout<<endl;
        //left
        for(int i=maxr,j=minc;i>=minr&&count<tne;i--){
            ans.push_back(A[i][j]);
            //cout<<A[i][j];
            count++;
        }
        minc++;
        //cout<<endl;
    }
    return ans;  
    }
};