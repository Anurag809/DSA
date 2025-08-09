class Solution {
public:
    bool isPowerOfTwo(int n) {
        long ans = 1;
        for(int i = 0;i<n;i++){
            if(ans<n){
                ans = ans*2;
            }else if(ans == n){
                return true;
            }else{
                return false;
            }
        }
        return false;
    }
};