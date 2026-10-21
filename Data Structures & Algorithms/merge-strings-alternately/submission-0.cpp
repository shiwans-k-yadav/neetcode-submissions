class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int a= word1.size();
        int b= word2.size();
        int n=0;
        if(a>=b){
            n=a;
        }
        else{
            n=b;
        }
        int i=0,j=0;
        while(n!=0){
            if(i<a){
                ans+=word1[i];
                i++;
            }
            if(j<b){
                ans+=word2[j];
                j++;
            }
            n--;
        }
        return ans;
    }
};