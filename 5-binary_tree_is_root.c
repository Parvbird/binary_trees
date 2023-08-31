#include "binary_trees.h"

/**
* binary_tree_is_root - this checks if a given node is a root
*
* Description:
* @node: pointer to node to be checked
*
* Return: 1 if node is a root. Otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
