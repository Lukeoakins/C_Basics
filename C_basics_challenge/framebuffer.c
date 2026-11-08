#include <stdio.h>

// char set_pixel(array,width,x,y,character){
//     int length = sizeof(array)/ sizeof(array[0]);
//     for (int i = 0;i<)
// }

int main(void){
    int width = 40;
    int height = 20;
    int resolution = width * height;
    char screen[resolution] = {};
    for (int i = 0;i < resolution; i++){
        screen[i] = '.';
        if ( i % width == width - 1 ){   // possibly problem where when i = 0 it does newline
            printf("%c\n",screen[i]);
        } else{
            printf("%c", screen[i]);
        }

    }

}