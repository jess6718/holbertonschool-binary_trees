#include "binary_trees.h"

/**
 * count_node - finds nodes of tree
 * @tree: a pointer to the root node of tree
 * Return: success returns total nodes of tree (including root), otherwise 0
 */
size_t count_node(const binary_tree_t *tree)
{
	size_t lh, rh;
	if (tree == NULL)
	{
		return (0);
	}
	lh = count_node(tree->left);
	rh = count_node(tree->right);
	if (lh > rh)
	{
		/*return height of tree which is height of subtree + 1*/
		return (lh + 1);
	}
	/*return height of tree which is height of subtree + 1*/
	return (rh + 1);
}

/**
 * binary_tree_height - finds height of binary tree
 * @tree: a pointer to root node of tree
 * Return: success returns height of tree, failure 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t t_h;
	if (tree == NULL)
	{
		return (0);
	}
	t_h = count_node(tree) - 1;
	return (t_h);
}
