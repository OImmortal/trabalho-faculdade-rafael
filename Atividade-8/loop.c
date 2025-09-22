#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i = 0;
    while (i < 10) {
        i++;
        printf("i: %d\n", i);
    }

    for (int j = 0; j < 10; j++) {
        printf("j: %d\n", j);
    }

    return 0;
}