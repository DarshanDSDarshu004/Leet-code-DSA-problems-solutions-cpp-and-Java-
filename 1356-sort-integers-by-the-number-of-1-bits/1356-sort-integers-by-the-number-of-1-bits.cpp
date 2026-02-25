class Solution {
public:
  string decimal_to_binary(int n)
{
    if (n == 0) return "0";   
    
    string res = "";
    while (n > 0) {
        int x = n % 2;
        res = char(x + '0') + res;  
        n /= 2;
    }
    return res;
}

  int count_ones(string s){
    int count=0;
    int n=s.size();
    for(char c:s){
        if(c=='1')
        count++;
    }
    return count;
  }
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>>res;
        for(int i=0;i<n;i++){
            string ans=decimal_to_binary(arr[i]);
            int freq=count_ones(ans);
            res.push_back({freq,arr[i]});
         
             
        }
        vector<int> ans;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            ans.push_back(res[i].second);
        }
    return ans;
        
    }
};