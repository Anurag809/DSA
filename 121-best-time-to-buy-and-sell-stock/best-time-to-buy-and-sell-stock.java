class Solution {
    public int maxProfit(int[] prices) {
        int max = prices[0];
        int profit = 0;
        for(int i =1;i<prices.length;i++){
            if(prices[i]<max){
                max = prices[i];
            }else if(prices[i] - max > profit){
                profit = prices[i] - max;
            }
        }return profit;
    }
}