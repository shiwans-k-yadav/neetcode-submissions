class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
            int n = people.size();
            sort(people.begin(),people.end());
            int boat=0;
            int i=0,j=n-1;
            while(i<=j){
                int sum = people[i]+people[j];
                if(i==j){
                    boat++;
                    break;
                }
                if(sum<=limit){
                    boat++;
                    i++;
                    j--;
                } 
                else if(sum>limit){
                    boat++;
                    j--;
                }
            }
            return boat;
    }
};