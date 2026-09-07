class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        long long num = x;
        while(x>0){
            long long ld = x%10;
            rev = rev*10+ld;
            x=x/10;
        }
        if(num==rev){
            return true;
        }
            else{
                return false;
            }
        
    }
};