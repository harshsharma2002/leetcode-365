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
    vector<int> v1; 
    vector<int> v2;
    vector<int> v;
    void preorder(TreeNode* root){
        if(root==NULL)
            return;
        if(root->right==NULL && root->left==NULL)
            v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        preorder(root1);
        v1=v;
        v.clear();
        preorder(root2);
        v2=v;
        if(v1.size()!=v2.size())
            return false;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
    }
};
