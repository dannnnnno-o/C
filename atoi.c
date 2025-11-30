#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isNumber(char *x, int size){
    for(int i = 0; i < size; i++){
        if(!isdigit(x[i])){
            return false;
        }
        else{
            continue;
        }
    }
    return true;
}

int main(){
char *str = "12asdsd";

if(isNumber(str, strlen(str))){
    printf("%d", atoi(str));
}
else{
    printf("not a number");
}

//isdigit(char x);
//returns 0 if false 
//

/* for(int i = 0; i < strlen(str); i++){
    if(!isdigit(str[i])){
        printf("not a number");
        break;
    }
    else{
        continue;
    }
} */
int num = atoi(str);
// printf("%d", num);

    return 0;
}