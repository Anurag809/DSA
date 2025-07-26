class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxValue = INT_MIN;
        for(int val : nums){
            currSum += val;
            maxValue = max(currSum,maxValue);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxValue;
    }
};