#include <stdio.h>

int max(int a, int b){
    if (a < b){
        return b;
    } else {
        return a;
    }
}

int main(void) {
    printf("%d\n", max(5,3));
    return 0;
}