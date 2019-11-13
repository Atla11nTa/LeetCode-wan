#include <bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root != NULL)
        {
            TreeNode *temp = root->left;
            root ->left = invertTree(root->right);
            root ->right = invertTree(temp);
        }
        return root;
    }
};
int main()
{
    TreeNode *node = new TreeNode(5);
    node ->left = new TreeNode(4);
    node ->right = new TreeNode(3);
    Solution *so = new Solution();
    so->invertTree(node);
    cout<<node->left->val;
    cout<<node->right->val;
}