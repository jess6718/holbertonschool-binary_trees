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
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to root of binary tree
 * Return: 1 on success, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (count_node(tree->left) != count_node(tree->right))
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
