#include <stdio.h>

int main(void){
    int array[] = {10,3,7,3,5,7,12,4,6,6,1,43,1,1,3,5,6,1,23};
    int length = sizeof(array)/ sizeof(array[0]);
    for (int i = 0;i < length;i++){
        printf("%d\n", array[i]);
    }
    return 0;
}