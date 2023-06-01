#include "binary_trees.h"

/**
 * binary_tree_preorder - goes throught the binary tree 
 * with preorder format
 * @tree: pointer to root node
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
