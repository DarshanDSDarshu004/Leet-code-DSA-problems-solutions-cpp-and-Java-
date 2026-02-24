/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  int binary_to_decimal(string s){

    int res=0;
    for(int i:s){
        res=res*2+(i-'0');
    }
  
  return res;
}

    int sumRootToLeaf(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int total=0;
        stack<pair<TreeNode*,string>>st;
        st.push({root,""});
        while(!st.empty()){
            auto[node,path]=st.top();
            st.pop();
            path+=char(node->val+'0');
            if(!node->left && !node->right){
                total+=binary_to_decimal(path);
            }

            if(node->right)
            st.push({node->right,path});
            if(node->left){
             st.push({node->left,path});
            }
        }

        return total;
    }
};