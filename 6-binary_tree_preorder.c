#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: a pointer to the root node of the ree to traverse
 * @func: a pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);/*process the value*/
	/*make recursive call to left child till it reaches NULL*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
