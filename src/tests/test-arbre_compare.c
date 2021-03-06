#include <stdio.h>
#include <assert.h>

#include "../Bicolor.h"

int main (int argc, char const *argv[])
{
    Bicolor arbre1 = arbre_create(10);
    Bicolor arbre2 = arbre_create(12);

    assert(arbre_compare(arbre1, arbre2) == 0); // false
    assert(arbre_compare(arbre1, arbre1) == 1); // true
    
    return 0;
}