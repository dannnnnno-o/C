#include <stdio.h>
#include <stdlib.h>
#include "ctrl.h"

int no_file(char *filename){
    FILE *file = fopen(filename, "r");

    if(file){
        fclose(file);
        return 0; // if file exists
    }
    return 1; // if file does not exists
}


int landingChoice(){
    int choice;
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 4){
        return choice;
    }
    else if(choice == 5){
        printf("Thank you for using Smart Tasker.");
    }
    return 0;
}

void taskOverview(char *filename){
    FILE *file = fopen(filename, "r");

    int finput = 0;
    fscanf(file, "%d", &finput);
    printf("Number: %d\n", finput);

    fclose(file);
}

