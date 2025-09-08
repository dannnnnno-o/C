#include <stdio.h>

int main(){

    /* 
    if(age >= 18 && registered && alive){ you can vote. }
    
    ifelse(age < 18){
    printf("Not old enough");
    }
    ifelse(!registered){
    printf("not registered");
    }
    */

/*     int day = 1;
    int key;

    int age = 18;
    int registered = 1;
    int alive = 0;

    int isOldEnough;

    if(age >= 18){
        isOldEnough = 1;
    }

    else{
        isOldEnough = 1;
    }


    key = (isOldEnough << 2 | registered << 1  | alive);

    //key = 00000110  

    switch(key){
        case 7: 
            printf("You can vote."); 
            break;
        case 6:
            printf("You are dead.");
            break;
        case 3: 
            printf("You are not old enough.");
            break;
    } */


    int a = 1; // 01
    int b = 2; // 10

    a = a ^ b; // 11
    
    b = a ^ b; // 01
    a = a ^ b; // 10

    printf("%d %d", a, b );


    

    return 0;
}