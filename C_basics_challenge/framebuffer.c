#include <stdio.h>

// char set_pixel(array,width,x,y,character){
//     int length = sizeof(array)/ sizeof(array[0]);
//     for (int i = 0;i<)
// }

int main(void){
    char screen[800] = {'.'};
    int width = 40;
    int length = sizeof(screen)/ sizeof(screen[0]);
    for (int i = 0;i < length; i++){
        if ( i % 40 == 0){   // possibly problem where when i = 0 it does newline
            printf("%C\n");
        } else{
        }

    }

}