#include "binary_trees.h"

/**
 * binary_tree_postorder - Function to tranverse a tree using post-order traversal
 * @tree: Pointer to root of the tree to traverse
 * func: Pointer to function to call for each node
 * 
 * Return: None
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	/*
	 An postorder traversal goes in the order of:
	postorder(left),postorder(right),display(root->data)
	*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}