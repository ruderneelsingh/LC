class Solution {
public:
long long reverse(long long x){
   long long rev = 0;
   while(x!=0){
            long long ld = x%10;
            if(rev>INT_MAX/10||rev<INT_MIN/10){
                return 0;
            }
            rev = rev*10+ld;
            x=x/10;
        }
        return rev;
    }
    bool isPalindrome(long long x) {
            if (x<0) return 0;
            long long rev = reverse(x);
            return rev == x;

        }
        
};