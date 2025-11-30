#include <stdio.h>

void PrintArr(int *x, int lengthX){
    for(int i = 0; i < lengthX; i++){
        printf("%d, ", *(x + i));
    }  
}

char *printStrings(char *arr[], int elements){
    for(int i = 0; i < elements; i++){
        printf("%s\n", arr[i]);
    }
}

int main(){

    int nums[] = {1, 2, 3, 4, 5};

    int numsSize = sizeof(nums);                // takes the total byte-size of nums[] 
    int elementSize = sizeof(nums[0]);          // takes the byte-size of the first index of nums[]

    int numsLength = numsSize / elementSize;  // divides total / element to get how much element fits in the total size

    // PrintArr(&nums[0], numsLength);


    //printf("%d", numsLength); // outputs 5 

    // end of arrays in int

    char *languages[] = {
        "C",
        "Python",
        "JavaScript"
    };

    printStrings(languages, 3);

    // printf("%s", languages[0]);

    // a pointer is a variable that stores the | memory address | of another variable.

    int x = 10;                 // declares a variable of x with a value of 10

    int *pX = &x;                // declares a pointer to the address of x 'denoted by &x'


   //printf("%d", *pX);          //dereferences *pX by using a pointer arithmetic to get the value located in the address and prints it out.


    return 0;
}