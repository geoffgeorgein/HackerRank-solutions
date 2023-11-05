int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int cost=0,ct=0;
    while(cost<s){
        
        
        
        if(p<m){
            cost+=m;
            
        }
        else{
            
            cost+=p;
            p-=d;
        }
        
        if(cost>s) break;
        ct++;
   
    }
   
    
    return ct;

}