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
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
      ListNode *temp=head;
      while(temp!=NULL){
        v.push_back(temp->val);
        temp=temp->next;
      }
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      temp=head;
      int i=v.size()-1;
      while(i>=0){
        temp->val=v[i];
        i--;
        temp=temp->next;
      }
      return head;
    }
};
