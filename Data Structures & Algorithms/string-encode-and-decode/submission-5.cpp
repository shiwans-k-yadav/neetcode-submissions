class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++){
            s+=strs[i];
            s+='~';
        }
        return s;
    }

    vector<string> decode(string s) {
        int n =s.size();
        vector<string> ans;
        string store;
        for(int i=0;i<n;i++){
            if(s[i]=='~'){
                ans.push_back(store);
                store="";
            }
            else{
                store+=s[i];
            }
        }
        return ans;
    }
};
