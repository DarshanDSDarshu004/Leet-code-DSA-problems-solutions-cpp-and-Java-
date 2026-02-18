class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_map<int,int>next_gre;
        stack<int>st;
        for(int i=n2-1;i>=0;i--){

            while(!st.empty() && st.top()<=nums2[i])
            st.pop();
            next_gre[nums2[i]]=st.empty()? -1:st.top();
            st.push(nums2[i]);
           }
           vector<int>res;
           for(int i=0;i<n1;i++ ){
            res.push_back(next_gre[nums1[i]]);
           }
           return res;

        }
        
    
};