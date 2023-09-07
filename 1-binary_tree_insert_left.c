#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts a new left node in a binary tree
  * @parent: pointer to parent node passed in
  * @value: value passed in
  * Return: pointer to node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)/*malloc fails*/
	{
		return (NULL);
	}
	if (parent->left != NULL)/*if parent already has left child*/
	{
		/*set old child as child's left child*/
		new_node->left = parent->left;
		/*access old child's parent pointer and set as new_node*/
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
