#include "binary_trees.h"

/**
 * binary_tree_postorder - trasverses the tree with postorder method
 * @tree: pointer to function called for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
