// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
       map<int,int>X;
       for(int i=0;i<n;i++){
           X[a[i]]++;
       }
       vector<int>vec;
       for(pair<int,int> i:X){
           while(i.second--) vec.push_back(i.first);
       }
       
       for(int i=0;i<n;i++) a[i]=vec[
i];
       
    }
    


    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends