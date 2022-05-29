#include "PathsWithSumLCCI.hpp"

int Solution::pathSum(TreeNode *root, int sum)
{
    int treePathSum = 0;
    int rootPathSum = 0;
    if(root == NULL)
	return 0;
    treePathSum += pathSum(root->left, sum);
    treePathSum += pathSum(root->right, sum);
    getRootPathSum(root, sum, 0, &rootPathSum);
    treePathSum += rootPathSum;
    return treePathSum;
}

void Solution::getRootPathSum(TreeNode* root, int sum, \
			      int tempRootPathSum, int* p_rootPathSum)
{
    if(root == NULL)
	return;
    tempRootPathSum += root->val;
    if(tempRootPathSum == sum)
	(*p_rootPathSum)++;
    getRootPathSum(root->left, sum, tempRootPathSum, p_rootPathSum);
    getRootPathSum(root->right, sum, tempRootPathSum, p_rootPathSum);
}
