// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Solution{
    public:
    int countChars(string s1, string s2){
    int res = 0;
       unordered_map<char,int> mp;
       for(char c : s1) mp[c]++;
       for(char c : s2) mp[c]--;
       for(auto a : mp) res += abs(a.second);
       return res;
    }
};

// { Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    Solution obj;
	    cout << obj.countChars(s1, s2) << endl;
	}
	
	return 0;
}  // } Driver Code Ends