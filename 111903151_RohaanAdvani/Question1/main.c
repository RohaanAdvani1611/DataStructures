#include <stdio.h>
#include"SLL.h"

int main() {
    list L;
    init_SLL(&L);

    append(&L, 1);
    append(&L, 2);
    append(&L, 8);
    append(&L, 9);
    append(&L, 12);
    append(&L, 16);
    append(&L, 18);
    append(&L, 11);
    append(&L, 14);
    append(&L, 13);
    
    traverse(L);
    
    reverse_even(L);
    traverse(L);

    return 0;
}
