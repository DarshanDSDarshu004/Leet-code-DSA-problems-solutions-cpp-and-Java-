class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
         int count=0;
        for(int c=n-2;c>=0;c--){
            mp[nums[c+1]]++;

            for(int a=0;a<c-1;a++){
              
              for(int b=a+1;b<c;b++){
                int req=nums[c]+nums[a]+nums[b];

                count+=mp[req];
              }
            }
        }
        return count;
    }
};