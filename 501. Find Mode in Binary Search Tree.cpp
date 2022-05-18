class Solution {
public:
    unordered_map<int,int>mp;
    TreeNode* inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return NULL;
        }
        mp[root->val]++;
        inorder(root->left);
        inorder(root->right);
        return NULL;
    }
    vector<int> findMode(TreeNode* root) 
    {
        inorder(root);
        priority_queue<pair<int,int>>pq;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pq.push({it->second,it->first});
        }
        int maxcount=pq.top().first;
        vector<int>ans;
        while(!pq.empty() && pq.top().first==maxcount)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
