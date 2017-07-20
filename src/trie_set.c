/**
 * Implementation of set based on tries. 
 * Use for strings, which contains ASCII 
 * alphabetic characters and apostroshe
 */

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "set.h"
#include "tries.h"

tries* root = NULL;
bool _is_initialzed = false;

bool contains(TYPE item)
{
    if (_is_initialzed)
    {
        return is_present(root, item, 0, strlen(item));
    }
    
    return false;
}

bool add(TYPE item)
{
    if (!_is_initialzed)
    {
        root = create_tries();
        _is_initialzed = true;
    }
    
    add_child(root, item, 0, strlen(item));
    return true;
}

bool removeItem(TYPE item){
    return false;
}

void removeAll()
{
    remove_all(root);
    root = NULL;
    _is_initialzed = false;
}
