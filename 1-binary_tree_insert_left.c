#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts new node on left side
 * @parent : pointer to insert new node
 * @value : value in the new node
 * Return: pointer to created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}
	return (new);
}
