#include<stdio.h>
#include<stdlib.h>
#include "lib/mode/mode.h"
#include "lib/ctrl/ctrl.h"
#include "lib/view/view.h"


int main(){
    landingPage();

    switch(landingChoice()){
        case 1: viewTasks("tasks.txt");
                break;
        case 2: addTask("tasks.txt");
                break;
        case 3: manageTasks("tasks.txt");
                break;
        case 4: history("tasks.txt");
                break;
        case 5: printf("Thank you for using Smark Tasker.");
                return 0;
    }

    printf("asdads");


    return 0;
}