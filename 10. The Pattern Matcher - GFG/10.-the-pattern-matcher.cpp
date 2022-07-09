// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       //Your code here
       int countX=0;
       int ans = 1;
       int i=0;
       while(i<s.size())
       {
           while(s[i] == 'x')
           {
                countX++;
                i++;
           }
            while(s[i] == 'y')
            {
                countX--;
                i++;
            }
            if(countX!=0)
                ans = 0;
       }
       cout<<ans;
       
       cout<<endl;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends