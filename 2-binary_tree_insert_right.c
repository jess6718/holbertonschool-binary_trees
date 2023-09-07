#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts a new right node in a binary tree
  * @parent: pointer to parent node passed in
  * @value: value passed in
  * Return: pointer to node
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)/*if parent already has right child*/
	{
		/*set old child as child's right child*/
		new_node->right = parent->right;
		/*access old child's parent pointer and set as new_node*/
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
