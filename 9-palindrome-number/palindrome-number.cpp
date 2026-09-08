class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        while(x>0){
            int digit=x%10;
            s=char(digit+'0')+s;
            x/=10;
        }
    int i=0;
    int j=s.length()-1;
    if(x<0){
        return false;
    }
    while(j>=i){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
        
    }
};