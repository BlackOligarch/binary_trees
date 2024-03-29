#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A ptr to the root node of the tree to measure the balance factor.
 *
 * Return: The balance of the binary tree if not NULL, otherwise 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	/* get the height of the left subtrees */
	l_height = binary_tree_height(tree->left);

	/* get the height of the right subtrees */
	r_height = binary_tree_height(tree->right);

	/*
	 * the balance factor is the difference between the height of the left and
	 * right subtrees
	 */
	return (l_height - r_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A ptr to the root node of the tree to measure the height.
 *
 * Return: The height of the tree is not NULL, otherwise 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (1 + (l_height > r_height ? l_height : r_height));
}
