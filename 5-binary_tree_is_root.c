#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry Function
 * @node: Pointer
 * Return: node is root 1 Otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
	return (0);
return (1);
}
