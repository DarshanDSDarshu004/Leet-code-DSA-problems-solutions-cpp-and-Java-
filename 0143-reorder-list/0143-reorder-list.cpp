/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode*temp=head;
        int len=0;
        vector<int>arr,ans;
        while(temp){
            len++;
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        int i=0,j=len-1;
        while(i<=j)
        {
            if(i==j){
                ans.push_back(arr[i]);
            }
                else{
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                }
                i++;
                j--;
            
        }
        ListNode* node=head;
        
        int k=0;
        while(node){
            node->val=ans[k++];
            node=node->next;
            

        }
        head=node;

        
    }
};