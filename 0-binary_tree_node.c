#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Pointer to parent node
 * @value: Ìnteger stored in the node
 * 
 * Return:
 * a.)Pointer to new node
 * b.) NULL if code fails
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Allocating memory space for the new node*/
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;


	if(newNode)
		return(newNode);
	else
		return(NULL);
}