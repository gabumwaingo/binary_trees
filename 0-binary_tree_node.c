#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent : pointer to parent node of tue node created
 * @value : value to out in the new node
 * Return: pointer to new node on success else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}
