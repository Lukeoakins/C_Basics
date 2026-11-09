#include <stdio.h>

void set_pixel(char array[],int width,int height, int x, int y,char character){
    int position = (width * y) + x;
    if ((0<=x && x<width) && (0<=y && y<height)){
        array[position] = character;
    }
}
void set_border(char array[], int width, int height,char character){
    for(int x = 0; x<width; x++){  
        for (int y = 0; y<height; y++){
            if (y == 0 || y == height-1){
                set_pixel(array,width,height,x,y,character);
            }else if (x ==0 || x == width-1){
                set_pixel(array,width,height,x,y,character);
            }
            
        }
    }
}
void create_rectangle(char array[],int width,int height ,int recWidth, int recHeight, int cornerX, int cornerY, char character){
    for(int x = 0;x<recWidth;x++){
        for(int y = 0; y<recHeight;y++){
            int currentX = cornerX + x;
            int currentY = cornerY + y;
            set_pixel(array,width,height,currentX,currentY,character);
        }
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
    set_pixel(screen, width, height, 30, 5, '#');
    create_rectangle(screen,width,height,50,5,4,4,'/');
    set_border(screen,width,height,'~');
    
    
    for (int i = 0;i < resolution; i++){
        if ( i % width == width - 1 ){
            printf("%c\n",screen[i]);
        } else{
            printf("%c", screen[i]);
        }
    }
    return 0;
}