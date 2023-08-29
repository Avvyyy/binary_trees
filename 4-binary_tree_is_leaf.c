#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if a node is a leaf
 * @node: Pointer to the node to check
 * 
 * Return: 
 * a.)1(if node is a leaf)
 * b.)0(if node is NULL or not a leaf)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return(0);

	if (node->left == NULL && node->right == NULL)
		return(1);
	else
		return(0);
}