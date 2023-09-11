#include "binary_trees.h"

/**
  * binary_tree_depth - function finds depth of a tree
  * @tree: pointer to node to measure the depth
  * Return: Depth of tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		count = count + 1;
		/*set tree value until it equals NULL- root*/
		tree = tree->parent;
	}
	return (count);
}
