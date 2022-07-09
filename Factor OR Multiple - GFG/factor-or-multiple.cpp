// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int factorOrMultiple(int N , int X , int A[]) {
        // code here
        int result =0;
        for(int i = 0; i<N; i++){
            if(A[i]%X== 0)result |= A[i];
        }
        return result;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,X;

        cin>>N>>X;
        
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.factorOrMultiple(N,X,A) << endl;
    }
    return 0;
}  // } Driver Code Ends