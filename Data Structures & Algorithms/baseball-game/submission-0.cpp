class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n = operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                int sum = a+b;
                st.push(a);
                st.push(sum);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int n = st.top();
                st.push(n*2);
            }
            else{
                int a  = stoi(operations[i]);
                st.push(a);
            }

        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};