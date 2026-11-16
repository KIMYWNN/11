#include <stdio.h>

void swap_val(int x, int y) {      
    int temp = x; x = y; y = temp;
}
void swap_ref(int *x, int *y) {    
    int temp = *x; *x = *y; *y = temp;
}

int main(void) {
    int a = 3, b = 5;
    swap_val(a, b);
    printf("a:%i, b:%i\n", a, b);

    a = 3; b = 5;
    swap_ref(&a, &b);
    printf("a:%i, b:%i\n", a, b);
    return 0;
}