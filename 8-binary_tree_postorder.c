#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using
 * post-order traversal
 * @tree: a pointer to the root node of the ree to traverse
 * @func: a pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*make recursive call to left child till it reaches NULL*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);/*process the value*/
}
