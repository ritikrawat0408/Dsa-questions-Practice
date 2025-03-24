class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start=0,end=1;
        int day1=prices[0];
        int day2=prices[0];
        int maxprofit=0;
        for(;end<prices.size();end++){
            if(prices[end]<prices[start]){
            start=end;
            day1=prices[start];
            }

            if(prices[end]>day1){
                day2=prices[end];
                maxprofit = max(maxprofit,day2-day1);
            }
        

        }
        return maxprofit;
    }
};