#include <stdio.h>

int main() {

    int arreglo[] = {3,6,9,12,15,18};

    int *ptr;

    ptr = arreglo;

    printf("%p\n", ptr);

    for (int i = 0; i < 6; i++) {

        printf("%d ", arreglo[i]);

    }

    return 0;
}