int jumpingOnClouds(vector<int> c) {
    
    int n=c.size();
    int ct=0,i=0;
    while(i<n){
        
        if(i<n-2 && c[i+2]!=1){
            i+=2;
            
        }
        else{
            if(i==n-1) break;
            i+=1;
        }
        // cout<<i<<" ";
        ct++;
    }
    return ct;

}