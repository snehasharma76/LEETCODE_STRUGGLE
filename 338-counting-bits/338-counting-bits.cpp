class Solution {
public:
    vector<int> countBits(int n) {
        int bit=32;
    vector<int> ans(n+1, 0);
    for(int j=0; j<=n; j++){
    
    
    for(int i=0; i<bit; i++){
        if((j>>i)&1) ans[j]++;
    }
      // cout<<ans[j]<<" ";  
    } 
return ans;
    }

};