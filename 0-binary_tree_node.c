#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_node - fuction that creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: return a pointer to the new node if sucessful or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL || value == NULL)
	{
		return (NULL);
	}
	else
	{
		if (parent == NULL && value != NULL)
		{
			new_node = malloc(sizeof(binary_tree_t));
			new_node->n = value;
			new_node->parent = parent;
			new_node->left = NULL;
			new_node->right = NULL;
		}
	}
	return (new_node);

}
