#include <stdio.h>

char set_pixel(char array[],int width,int height, int x, int y,char character){
    int resolution = width * height ;
    int position = (width * y) + x;
    for (int i=0;i <resolution; i++){
        array[position] = character;
    }
}

int main(void){
    int width = 40;
    int height = 20;
    int resolution = width * height;
    char screen[resolution] = {};
    for (int i = 0;i < resolution; i++){
        screen[i] = '.';
        
    }
    set_pixel(screen, width, height, 19, 0, '#');
    
    for (int i = 0;i < resolution; i++){
        if ( i % width == width - 1 ){
            printf("%c\n",screen[i]);
        } else{
            printf("%c", screen[i]);
        }
    }
}