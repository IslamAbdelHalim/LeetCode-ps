class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfite = 0;
        int min = prices[0];
    
        for (int c: prices) {
            if (min > c)
                min = c;

            if (maxProfite < c - min)
                maxProfite = c - min;
        }
        
        return maxProfite;
    }
};