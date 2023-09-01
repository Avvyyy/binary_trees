#include "binary_trees.h"

/**
 * binary_tree_preorder - Function to tranverse a tree using pre-order traversal
 * @tree: Pointer to root of the tree to traverse
 * func: Pointer to function to call for each node
 * 
 * Return: None
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	/*
	 A preorder traversal goes in the order of:
	 display(root->data), preorder(left), preorder(right)
	*/
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}