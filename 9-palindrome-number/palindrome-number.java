class Solution {
    public boolean isPalindrome(int x) {
        int sum = 0;
        int num = x;
        int rem =0;
        while(num>0){
            rem = num%10;
            sum = sum*10 + rem;
            num = num/10;
        }
        return (sum == x);
    }
}