class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int   ele=nums[0];
        vector<int>res;

        for(int i :nums){
            while(ele<i){
                res.push_back(ele);
                ele++;
             }
                ele++;
         }     
        
        return res; 
    }
};