class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for(int num : nums) {
            mp[num]++;
        }

        // Step 2: Store map elements in vector
        vector<pair<int, int>> arr;

        for(auto it : mp) {
            arr.push_back({it.first, it.second});
        }

        // Step 3: Sort according to frequency (descending)
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Step 4: Pick top K elements
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};
