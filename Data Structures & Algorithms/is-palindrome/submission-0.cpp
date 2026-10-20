class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        int st=0,en=n-1;
        while(st<en){
            if(!isalnum(s[st])){
                st++;
            }
            else if(!isalnum(s[en])){
                en--;
            }
            else{
                if(tolower(s[st])!=tolower(s[en])){
                    return false;
                }
                st++;
                en--;
            }

        }
        return true;
    }
};
