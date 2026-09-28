class Solution {
public:

    bool ispal(string& s, int i, int j){

        if(i>=j){
            return true;
        }

        if(!isalnum(s[i])) return ispal(s, i+1, j);
        if(!isalnum(s[j])) return ispal(s, i, j-1);

        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }

        return ispal(s, i+1, j-1);
    }


    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        if(ispal(s, 0, j)){
            return true;
        }
        else{
            return false;
        }
    }
};