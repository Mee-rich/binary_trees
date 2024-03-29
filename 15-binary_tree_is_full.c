#include "binary_trees.h"

/**
 * is_full_recursive - Function to check if a tree is full recursively
 * @tree: Pointer to the root of the tree to check
 *
 * Return: If the tree is not full, return (0), else return (1)
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
				(tree->left != NULL && tree->right == NULL))
			return (0);

		/* Recursively check both subtrees */
		if (!is_full_recursive(tree->left) || !is_full_recursive(tree->right))
			return (0);
	}
	return (1);
}
