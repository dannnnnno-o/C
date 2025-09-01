#include<stdio.h>

int main(){

    // a pointer 'denoted by *pVariable' where p is a prefix for a variable, points to the address in memory of a specified variable.
    //e.g.:

    
    int x = 2;           // declares an int of x with a value of 2
    int *pX = &x;       // declares a pointer that points to the address of x 'denoted by &x'
    printf("%d", *pX);  // dereferences the pointer address to get the value of that address
   
    // arithmetic operator * has two main uses:

    // if used on an address (&x), that address will be stored in a pointer to x, denoted by '*pX'
    // if used to a pointer, it will dereference that pointer to get the value on the location of the address.


    //printf("This file is for learning and practicing pointers in C.");
    return 0;
}