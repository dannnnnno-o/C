#include <stdio.h>

void printName(char name[]){
    printf("Your name is: %s\n", name);
}

int main(){

    printName("dan");
    printName("johnrey");
    printName("sam");
    printName("allen");
    printName("johnrey");
    return 0;
}