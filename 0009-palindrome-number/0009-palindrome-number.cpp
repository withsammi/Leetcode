class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int dup = x;
        long rev = 0;
        while (x != 0) {
            int ld = x % 10;
            rev = (rev * 10) + ld;
            x = x / 10;
        }
        
        if(rev == dup){
            return true;
            }else{
                return false;
        }
        
    }
};