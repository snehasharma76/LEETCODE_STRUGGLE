class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //int n = prices.size();
        int min = prices[0];
        int max = INT_MIN;
        int x;
        for(int i = 0; i<prices.size(); i++){
           x = prices[i]-min;
            if(x>max)max = x;
            if(prices[i]<min)min = prices[i];
        }
        return max;
    }
};