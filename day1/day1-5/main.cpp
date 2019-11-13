#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    //TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        else{
            int leftMax = maxDepth(root->left);
            int rightMax = maxDepth(root->right);
            return leftMax>righMax?leftMax+1:rightMax+1;
        }
    }
};