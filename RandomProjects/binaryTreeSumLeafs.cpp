#include <cstddef>


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sum = 0;

void recurse(TreeNode * node, int parentVal) 
{
    int thisVal = (parentVal << 1) | node->val;
    if (node->left == 0 && node->right == 0) 
    {
        sum += thisVal;
    }
    if (node->left)
        recurse(node->left, thisVal);
    if (node->right)
        recurse(node->right, thisVal);
}

int sumRootToLeaf(TreeNode* root)
{
    recurse(root, 0);
    return sum;
}

/* recursion
int ans=0;
    void recur(TreeNode* root,int level)
    {
        if(root==NULL)
            return ;
        if(root->left==NULL && root->right==NULL)
        {
          ans+=level*2+root->val;
            return;
        }
        recur(root->left,level*2+root->val);
        recur(root->right,level*2+root->val);
    }
    int sumRootToLeaf(TreeNode* root) {
        recur(root,0);
        return ans;
    }

//----------------FromLeetCode
class Solution {
    int sum = 0;

public:
    int sumRootToLeaf(TreeNode* root) {
        recurse(root, 0);
        return sum;
    }

    void recurse(TreeNode * node, int parentVal)
    {
        int thisVal = (parentVal << 1) | node->val;
        if (node->left == 0 && node->right == 0)
        {
            sum += thisVal;
        }
        if (node->left)
            recurse(node->left, thisVal);
        if (node->right)
            recurse(node->right, thisVal);
    }
};
    //------
    int sol=0;
    int sumRootToLeaf(TreeNode* root,int num=0) {
        if(!root)return 0;
        num *= 2;
        num+=root->val;
        if(!root->left&&!root->right)sol+=num;
        sumRootToLeaf(root->left,num);
        sumRootToLeaf(root->right,num);
        return sol;
    }
*/
