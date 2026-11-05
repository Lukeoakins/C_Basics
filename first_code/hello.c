#include <stdio.h>

int subtract(int a, int b){
    int c = a - b;
    return c;
}


int main(void) {
    int c = subtract(5,3);
    printf("Number = %d\n", c);
    return 0;
}