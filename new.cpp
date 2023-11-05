#include <bits/stdc++.h>

using namespace std;


vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

    vector<int>b=a;
    int n=a.size();
    
    for(int i=0;i<n;i++){
        
        a[(i+k)%n]=b[i];
        
        
    }
    int m=queries.size();
    
    vector<int>ans;
    
    for(int j=0;j<m;j++){
        ans.push_back(a[queries[j]]);
    }
    
    return ans;
}
