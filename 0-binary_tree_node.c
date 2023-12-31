#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a tree node
 * @parent: pointer to parent node passed in
 * @value: value passed in
 * Return: pointer to node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	/*no need to verify whether parent == NULL*/
	/*because this function also cater to root node creation*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
