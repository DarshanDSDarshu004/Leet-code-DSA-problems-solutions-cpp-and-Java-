class Solution {
    public boolean containsDuplicate(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>freq=new HashMap<>();

        for(int i=0;i<n;i++){
            if(freq.containsKey(nums[i]))
            return true;

            freq.put(nums[i],1);
        }
        return false;
        
        
    }
}