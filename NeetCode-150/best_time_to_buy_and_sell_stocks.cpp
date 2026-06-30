class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int current_min=0;
        int profit=0;
        for(int i=1;i<len;i++){
            int difference=prices[i]-prices[current_min];
            if(difference<0){
                current_min=i;
                
            }
            else if (difference>profit){
                profit=difference;
            }
                        
        } 
        return profit;      
    }
};
