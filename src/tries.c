/**
 * Implementation of tries
 */

#include "tries.h"
#include "stdlib.h"

tries* _new_node();
int _index(char c);

void add_child(tries* root, TYPE word, int pos, int len)
{
	char c = word[pos++];
	int ind = _index(c);

	if (root->children[ind] == NULL)
	{
		root->children[ind] = _new_node();
	}

	if (pos < len)
	{
		add_child(root->children[ind], word, pos, len);
	}
	else
	{
		root->is_leaf = true;
	}

}

tries* _new_node()
{
	tries* res = malloc(sizeof(tries));
	if (res != NULL)
	{
		res->is_leaf = false;
		for (int i = 0; i < KEYS; ++i)
		{
			res->children[i] = NULL;
		}
	}

	return res;
}

int _index(char c)
{
	int result;
	if (c != '\'')
		result = c - 65;
	else
		result = 26;

	return result;
}
