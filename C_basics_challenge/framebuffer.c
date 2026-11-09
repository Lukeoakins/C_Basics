#include <stdio.h>

void set_pixel(char array[],int width,int height, int x, int y,char character){
    int position = (width * y) + x;
    if ((0<=x && x<width) && (0<=y && y<height)){
        array[position] = character;
    }
}

void create_rectangle(char array[],int width,int height ,int recWidth, int recHeight, int cornerX, int cornerY, char character,bool isFilled){
    for(int x = 0;x<recWidth;x++){
        for(int y = 0; y<recHeight;y++){
            int currentX = cornerX + x;
            int currentY = cornerY + y;
            if (isFilled){
            set_pixel(array,width,height,currentX,currentY,character);
            } else{
                if((y == 0 || y == recHeight - 1)||(x == 0 || x == recWidth - 1)){
                    set_pixel(array,width,height,currentX,currentY,character);
                }
            }

        }
    }
}
void set_border(char array[], int width, int height,char character){
    create_rectangle(array,width,height,width,height,0,0,character,false);
}

void create_diagonal(char array[],int width,int height,int xStart,int yStart, int xFin, int yFin,char character){
    if(xFin < xStart || yFin< yStart){
        int tempX = xStart;
        int tempY = yStart;
        xStart = xFin;
        yStart = yFin;  
        xFin = tempX;
        yFin = tempY;
    }
    int xWidth = xFin -xStart;
    int yHeight = yFin - yStart;

    if(xWidth>yHeight){
        for(int x = xStart;x<xWidth + xStart;x++){
            int y = yStart + ((yHeight*(x-xStart))/xWidth);
            set_pixel(array,width,height,x,y,character);
        }
    }else{
        for(int y= yStart;y<yHeight + yStart;y++){
            int x = xStart +((xWidth*(y-yStart))/yHeight);
            set_pixel(array,width,height,x,y,character);
        }
    }
}

int main(void){
    int width = 40;
    int height = 60;
    int resolution = width * height;
    char screen[resolution] = {};
    for (int i = 0;i < resolution; i++){
        screen[i] = '.';
        
    }
    set_pixel(screen, width, height, 30, 5, '#');
    create_rectangle(screen,width,height,30,5,4,4,'M',true);
    create_diagonal(screen,width,height,10,10,30,30,'L');
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