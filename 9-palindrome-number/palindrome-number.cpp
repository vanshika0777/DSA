class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int num=x;
        while(x>0){
            int digit=x%10;
            rev=(rev*10)+digit;
            x/=10;
        }

        if(rev==num){
            return true;
        }
        else{
            return false;
        }
       
        
    }
};