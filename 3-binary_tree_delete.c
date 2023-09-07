#include "binary_trees.h"
/**
 * binary_tree_delete - delete the tree
 * @tree: root pointer
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/*recursion with tree->left/right pointer passed in*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
