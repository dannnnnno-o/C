#include <stdio.h>

float Rating(float difficulty, float daysLeft){
    return difficulty / daysLeft;
}


int main(){

    printf("Task 1 rating: %.2f\n", Rating(8.5, 2));
    printf("Task 2 rating: %.2f\n", Rating(8, 1));
    printf("Task 3 rating: %.2f\n", Rating(8.5, 2));
    printf("Task 4 rating: %.2f\n", Rating(4, 1));
    printf("Task 5 rating: %.2f\n", Rating(7, 1));

    return 0;
}