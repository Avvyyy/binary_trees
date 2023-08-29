#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the
 * left-child of another node
 * @parent: Pointer to parent node
 * @value: Value to store in the new node
 * 
 * Return:
 * a.) Pointer to the created node
 * b.) NULL (on failure or parent is NULL)
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    
    parent->right = new_node;
    return (new_node);
}
