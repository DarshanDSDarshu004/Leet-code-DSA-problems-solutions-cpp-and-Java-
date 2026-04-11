class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        double max_sum=-1e9;
        int j=0;
        for(int i=0;i<n;i++){
             sum+=nums[i];
            if(i-j+1==k){
                max_sum=max(max_sum,(double)sum/k);
                sum-=nums[j];
                j++;
            }
           
        }
        
        return max_sum;
    }
};