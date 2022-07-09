// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
class Solution{
  public:
    int countSumSubsets(int arr[], int N){
        unsigned int pow_set_size = pow(2, N);
    int counter, j, ans= 0;
 
    // Run from counter 000..0 to 111..1
    for (counter = 0; counter < pow_set_size; counter++) {
        int s=0;
        for (j = 0; j < N; j++) {
            
            if (counter & (1 << j))s+=arr[j];
              
        }
        if(s%2==0)ans++;
    }
    ans--;
    return ans;
}
        

};

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    Solution obj;
	    cout << obj.countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}  // } Driver Code Ends