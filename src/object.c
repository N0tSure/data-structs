#include <stdbool.h>
#include <stdlib.h>
#include "object.h"

/**
 * Object utils implementation
 */

int hashcode(TYPE self)
{
    int result = 37;
    for (int i = 0; self[i] != '\0'; i++)
    {
        result += self[i] * 37;
    }
    return abs(result);
}

bool equal(TYPE first, TYPE second) {
    
    if (first != NULL && second != NULL)
    {
        int i = 0;
        do {
            
            if (first[i] != second[i])
            {
                return false;
            }
            
        } while (first[i++] != '\0');
        
        return true;
    }
    
    return false;
}

char* to_string(TYPE self) {
    return self;
}