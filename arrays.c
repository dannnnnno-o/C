#include <stdio.h>

int main(){

    int nums[] = {1, 2, 3, 4, 5};

    int numsSize = sizeof(nums);                // takes the total byte-size of nums[] 
    int elementSize = sizeof(nums[0]);          // takes the byte-size of the first index of nums[]

    int numsLength = numsSize / elementSize;  // divides total / element to get how much element fits in the total size

    //printf("%d", numsLength); // outputs 5 

    // end of arrays in int

    char languages[3][2] = {
        "C",
        "Python",
        "JavaScript"
    };

    printf("%s", languages[0]);


    return 0;
}