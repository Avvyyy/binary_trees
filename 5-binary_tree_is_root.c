#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root
 * @node: Pointer to a node to check`
 * 
 * Return:
 * a.)1(if node)
 * b.)0(if not node or if node is NULL)
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return(0);

	if (node->parent == NULL)
		return(1);
	else
		return(0);


}