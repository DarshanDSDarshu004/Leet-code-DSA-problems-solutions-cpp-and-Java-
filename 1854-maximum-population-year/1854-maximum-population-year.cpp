class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>populations(101,0);

        for(auto &i:logs){
            int birth=i[0];
            int death=i[1];

            populations[birth-1950]++;
            populations[death-1950]--;
        }

             int max_pop=0;
            int curr=0;
            int year=1950;
            for(int i=0;i<101;i++){
                curr+=populations[i];
                if(curr>max_pop){
                    max_pop=curr;
                    year=1950+i;
                }
            }
        return year;
    }
};