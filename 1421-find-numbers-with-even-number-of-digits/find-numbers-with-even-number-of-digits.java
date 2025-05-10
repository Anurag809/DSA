class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int num:nums){
            if(even(num)){
                count++;
            }
        }
        return count;
    }
    boolean even(int num){
        int digitsCount=digit(num);
        return digitsCount%2==0;
    }

    int digit(int num){
        int count = 0;
        while(num>0){
            num /= 10;
            count++;
        }
        return count;
    }
}