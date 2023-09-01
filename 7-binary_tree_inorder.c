#include "binary_trees.h"

/**
 * binary_tree_inorder - Function to tranverse a tree using in-order traversal
 * @tree: Pointer to root of the tree to traverse
 * func: Pointer to function to call for each node
 * 
 * Return: None
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	/*
	 An inorder traversal goes in the order of:
	inorder(left), display(root->data),inorder(right)
	*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}