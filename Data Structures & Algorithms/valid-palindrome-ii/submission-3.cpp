class Solution {
public:
    bool check(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n =s.size();
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                if(check(s,i+1,j)|| check(s,i,j-1)){
                    return true;
                }
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};