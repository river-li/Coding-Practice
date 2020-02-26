//给定一个二叉树，找出其最大深度。

//二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

//说明: 叶子节点是指没有子节点的节点。

//示例：
//给定二叉树 [3,9,20,null,null,15,7]，

    //3
   /// \
  //9  20
    ///  \
   //15   7
//返回它的最大深度 3 。

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root==NULL) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};

// 最初做的时候写了一堆判断，结果超时了，简化一下条件发现很多条件都没有必要存在，最终简洁的反而更快
//
// 递归版本应该会慢一些，还可以优化一下修改成非递归的，但是代码量会大不少。
