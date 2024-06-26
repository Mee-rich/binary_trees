#include "binary_trees.h"

/** 
 * binary_tree_node - Function that creates a binary tree node
 * @parent: A pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node 
 * 	or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node;
	
	tree_node = malloc(sizeof(binary_tree_t));
	if (tree_node == NULL)
		return (NULL);
	
	tree_node->n = value;
	tree_node->parent = parent;
	tree_node->left = NULL;
	tree_node->right = NULL;

	return (tree_node);
}
