class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<char>st;
        int j=0;
        int max_len=0;

        for(int i=0;i<n;i++){
            while(st.find(s[i])!=st.end()){
                st.erase(s[j]);
                j++;
            }
                st.insert(s[i]);
                  max_len=max(max_len,i-j+1);
            
        }
        return max_len;
        
    }
};