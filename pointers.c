#include<stdio.h>
#include<strings.h>

void PrintStr(char *str, int strLen){

    for(int i = 0; i < strLen; i++){
        printf("%c", str[i]);
    }
}

void PrintArrStr(char **arr, int length){

    for(int i = 0; i < length - 1; i++){
        printf("%s\n", arr[i]);
    }

}

int main(){

    //printf("This file is for learning and practicing pointers in C.");

    // a pointer 'denoted by *pVariable' where p is a prefix for a variable, points to the address in memory of a specified variable.
    //e.g.:

    
    // int x = 2;           // declares an int of x with a value of 2
    // int *pX = &x;       // declares a pointer that points to and stores the address of x 'denoted by &x'
    // printf("%d", *pX);  // dereferences the pointer address to get the value of that address
   
    // arithmetic operator * has two main uses:

    // if pointed to an address (&x), that address will be stored in a pointer to x, denoted by '*pX'
    // if used to a pointer, it will dereference that pointer to get the value on the location of the address.


/*     char fruits[8] = "asdfss";
    int fruitsLen = strlen(fruits);   */

    //PrintStr(fruits, fruitsLen);

    char *languages[] = {
        "C",
        "Python",
        "JavaScript"
    };

    char **pLanguages = languages;

    int languagesLen = sizeof(**pLanguages / *languages[0]);

    // printf("%d", languagesLen);

    // printf("%d", languagesLen);
    PrintArrStr(pLanguages, languagesLen);


    return 0;
}