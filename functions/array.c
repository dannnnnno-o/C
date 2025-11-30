#include <stdio.h>

int main(){
    // ARRAY
    // set of data
    // can only have one data type

    int nums[] = {1, 2, 3, 4, 5}; //declaration
                // 0, 1, 2, 3
    int size = sizeof(nums)/sizeof(nums[0]);
                //    32   /    8
                //         4

    // indeces starts 0
    //printf("%d", nums[1]); //gagamitin na yung array

    for(int i = 0; i < size; i++){
        printf("%d\n", nums[i]);
    }



    // STRING
    // collection of characters

    char letter = 'a';
    char letters[] = "sample string";
    char letters2[] = "sample string2";
    // char words[20][20] = {letters, letters2};

    // printf("%s", words[0][]);






    return 0;
}