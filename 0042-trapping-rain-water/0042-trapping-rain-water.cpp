class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left_max=0,right_max=0;
        int left=0,right=n-1;
         int ans=0;
         while(left<right){
            if(height[left]<height[right]){
                  if(left_max>height[left]){
                    ans+=left_max-height[left];
                  }
                  else{
                    left_max=height[left];
                  }
                  
                  left++;

            }

            else{

                if(right_max>height[right]){
                    ans+=right_max-height[right];
                }
                else{
                    right_max=height[right];
                }

                right--;
            }

        
         }
         return ans;
        
    }
};