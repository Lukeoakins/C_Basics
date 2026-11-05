#include <stdio.h>

int subtract(int a, int b){
    int c = a - b;
    return c;
}


int main(void) {
    int a = 0;
    int b = 5;
    int c = 0;
    while (a <= b){
        c = subtract(a,b);
        a++ ;
    }
    printf("Number = %d\n", c);
    return 0;
}