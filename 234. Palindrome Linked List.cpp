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
    bool isPalindrome(ListNode* head) {
        ListNode* fi = head;
        stack<int> st;
        while(head != nullptr) {
            st.push(head -> val);
            head = head -> next;
        }
        while(!st.empty()){
            int cur = st.top(); st.pop();
            if(cur != fi -> val) return false;
            fi = fi -> next;
        }
        return true;
    }
};
