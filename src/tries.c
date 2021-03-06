/**
 * Implementation of tries
 */

#include <stdlib.h>
#include <ctype.h>
#include "tries.h"

tries* _new_node();
int _index(char c);

tries* create_tries()
{
    return _new_node();
}

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
		root->children[ind]->is_leaf = true;
	}

}

bool is_present(tries* root, TYPE word, int pos, int len)
{
    char c = word[pos++];
    int ind = _index(c);
    
    if (root->children[ind] != NULL)
    {
        if (pos < len)
        {
            return is_present(root->children[ind], word, pos, len);
        }
        else
        {
            return root->children[ind]->is_leaf;
        }
    }
    
    return false;
}

void remove_all(tries* root)
{
    for (int i = 0; i < KEYS; i++)
        {
            if (root->children[i] != NULL)
            {
                remove_all(root->children[i]);
                root->children[i] = NULL;
            }
        }
        
    free(root);
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
		result = tolower(c) - 97;
	else
		result = 26;

	return result;
}
