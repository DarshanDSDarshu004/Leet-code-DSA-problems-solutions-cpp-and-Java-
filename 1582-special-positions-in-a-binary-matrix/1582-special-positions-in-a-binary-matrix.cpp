class Solution {
public:

    /*
    ---------------------------------------------------------
    APPROACH 1 : BRUTE FORCE
    ---------------------------------------------------------
    Idea:
    For every cell (i,j):
    1. If mat[i][j] == 1
    2. Check the entire row i
    3. Check the entire column j
    4. If no other 1 exists in that row and column -> special

    Time Complexity: O(m * n * (m+n))
    Space Complexity: O(1)
    */
 

    /*
    int brute(vector<vector<int>>& mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    bool special=true;

                    // check row
                    for(int col=0;col<n;col++)
                    {
                        if(col!=j && mat[i][col]==1)
                        {
                            special=false;
                            break;
                        }
                    }

                    // check column
                    for(int row=0;row<m;row++)
                    {
                        if(row!=i && mat[row][j]==1)
                        {
                            special=false;
                            break;
                        }
                    }

                    if(special)
                        count++;
                }
            }
        }

        return count;
    }

   */

    /*
    ---------------------------------------------------------
    APPROACH 2 : ROW + COLUMN COUNT ARRAYS
    ---------------------------------------------------------
    Idea:
    1. Count number of 1s in each row
    2. Count number of 1s in each column
    3. A position is special if:
       mat[i][j] == 1
       rowCount[i] == 1
       colCount[j] == 1

    Time Complexity: O(m*n)
    Space Complexity: O(m+n)
    */
   
   /*
    int rowCol(vector<vector<int>>& mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> row(m,0);
        vector<int> col(n,0);

        // count 1s in rows and columns
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }

        int ans=0;

        // check special positions
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1 && row[i]==1 && col[j]==1)
                    ans++;
            }
        }

        return ans;
    }

*/

    /*
    ---------------------------------------------------------
    APPROACH 3 : ROW SUM WITH COLUMN TRACKING
    ---------------------------------------------------------
    Idea:
    1. Traverse each row
    2. Count number of 1s in that row
    3. If row has exactly one 1, store its column index
    4. Increase count for that column
    5. If a column count becomes exactly 1 -> special

    Time Complexity: O(m*n)
    Space Complexity: O(n)
    */

/*
    int better(vector<vector<int>>& mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> col(n,0);

        for(int i=0;i<m;i++)
        {
            int rowSum=0;
            int colIndex=-1;

            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    rowSum++;
                    colIndex=j;
                }
            }

            if(rowSum==1)
                col[colIndex]++;
        }

        int ans=0;

        for(int j=0;j<n;j++)
        {
            if(col[j]==1)
                ans++;
        }

        return ans;
    }


*/

    int optimal(vector<vector<int>>& mat)
    {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> row(m,0), col(n,0);

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(mat[i][j])
                {
                    row[i]++;
                    col[j]++;
                }

        int ans=0;

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(mat[i][j] && row[i]==1 && col[j]==1)
                    ans++;

        return ans;
    }



    int numSpecial(vector<vector<int>>& mat) {

        return optimal(mat);

    }
};