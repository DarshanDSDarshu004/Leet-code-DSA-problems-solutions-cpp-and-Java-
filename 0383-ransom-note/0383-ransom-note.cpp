class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.size();
        int n2=magazine.size();
        vector<int>freq1(26,0),freq2(26,0);

        for(int i=0;i<n2;i++){
            freq2[magazine[i]-'a']++;
        }
         for(int i=0;i<n1;i++){
            freq1[ransomNote[i]-'a']++;
        }

        for(int i=0;i<n1;i++){
            if(!(freq2[ransomNote[i]-'a']>=freq1[ransomNote[i]-'a']))
            return false;
        }
        return true;
        
        
    }
};