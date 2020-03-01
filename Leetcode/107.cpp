/*
 * 给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）

例如：
给定二叉树 [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其自底向上的层次遍历为：

[
  [15,7],
  [9,20],
  [3]
]

 *
 */

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<int> mid;
        vector<vector<int>> result;
        queue<TreeNode *> layerQueue;
        if(root==NULL) return result;
        layerQueue.push(root);
        while(!layerQueue.empty())
        {
            int size = layerQueue.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *front = layerQueue.front();
                mid.push_back(front->val);
                layerQueue.pop();
                if(front->left) layerQueue.push(front->left);
                if(front->right) layerQueue.push(front->right);
            }
            result.push_back(mid);
            mid.clear();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

// 首先构造一个队列
// 里层的每次循环次数与该层的节点数量有关，即该层前一层子节点的数量
// 因此在循环开始都需要获取当前的节点数量
// 每一次将当前节点放入里层的向量中，之后将这个节点的子节点入队
// 构造出里层的向量后将其放入外层的向量
// 由于向量的push是放在后面的，最终要得到自底向上还需要做一次倒置
