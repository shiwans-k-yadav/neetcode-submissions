class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans="";
        int minSize = INT_MAX;
        for(int i=0;i<n;i++){{
            if(strs[i].length()<minSize){
                minSize = strs[i].length();
            }
        }
        int j=0;
        char ch = strs[0][0];
        while(j<minSize){
            for(int i=0;i<n;i++){
                if(strs[i][j]!=ch){
                    return ans;
                }
            }
            j++;
            ans+=ch;
            ch=strs[0][j];
        }
        return ans;
    }
    }
};