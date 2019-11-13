#include <bits/stdc++.h>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int helper(TreeNode* root, int sum){
        if(root == NULL)
            return 0;
        int cnt = 0;
        if(root->val == sum)
            cnt++;
        int left = helper(root->left,sum-root->val);
        int right = helper(root->right,sum-root->val);
        return cnt+left+right;
    }

    int pathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return 0;
        int help = helper(root,sum); //寻找以访问点为起点的路径
        int left = pathSum(root->left,sum);
        int right = pathSum(root->right,sum);
        return left+right+help;
    }
};

int main()
{
    TreeNode *node = new TreeNode(10);
    node->left = new TreeNode(5);
    node->right = new TreeNode(-3);
    node->left->left = new TreeNode(3);
    node->left->right = new TreeNode(2);
    node->left->right->right = new TreeNode(1);
    node->right->right = new TreeNode(11);
    Solution *so = new Solution;
    int sum = so->pathSum(node,8);
    cout<<sum;
}