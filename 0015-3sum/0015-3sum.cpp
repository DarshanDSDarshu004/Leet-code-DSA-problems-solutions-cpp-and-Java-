class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
    //vector<vector<int>> threeSumUsingMap(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    
    if (n < 3) return result;
    
    sort(nums.begin(), nums.end());  // Sort the array
    
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        unordered_set<int> seen;
        for (int j = i + 1; j < n; j++) {
            int complement = -(nums[i] + nums[j]);
            if (seen.find(complement) != seen.end()) {
                result.push_back({nums[i], nums[j], complement});
                
                // Skip duplicates for the second element
                while (j + 1 < n && nums[j] == nums[j + 1]) j++;
            }
            seen.insert(nums[j]);
        }
    }
    
    return result;
}
};