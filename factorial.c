#include <stdio.h>

int Factorial(int n){
    int y = n;

    while (y != 1){
        --y;
        n = n * y;
    }
    return n;
}

int main(){

    printf("%d", Factorial(5));
    return 0;
}


