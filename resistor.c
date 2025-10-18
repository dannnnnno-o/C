#include<stdio.h>
#define black 0
#define brown 1
#define red 2
#define orange 3
#define yellow 4 
#define green 5
#define blue 6
#define violent 7
#define gray 8
#define white 9
#define gold 0.1
#define silver 0.01


int resistorValue(int color1, int color2, int multiplier, float tolerance);

int main(){
    resistorValue(orange, red, yellow, silver);
    
}

int resistorValue(int color1, int color2, int multiplier, float tolerance){

    char color1str[20];
    char color2str[20];

    sprintf(color1str, "%d", color1);
    sprintf(color2str, "%d", color2);

}



/* #include <stdio.h>

int main(){

    printf("%f", 50 * 0.20);

    return 0;
} */