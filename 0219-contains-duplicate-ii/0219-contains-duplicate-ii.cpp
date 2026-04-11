class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }

        for(auto &p :mp){
            vector<int>ans=p.second;
            for(int i=1;i<ans.size();i++){
                int diff=abs(ans[i]-ans[i-1]);
                if(diff<=k)
                return true;
            }
        }
        return false;
    }
};