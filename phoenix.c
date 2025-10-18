#include<stdio.h>
//Joaquin Phoenix Sayas
//BSIT-1F
//Set B 

int main(){
    char option;
    
    printf("\n=================\n");
    printf(" MAIN PROGRAM MENU \n");
    printf("=================\n");
    printf("[A] - Personal Details\n");
    printf("[B] - Even or Odd Cheker\n");
    printf("[C] - For Loop Counter\n");
    printf("[D] - While Loop Counter\n");
    printf("[E] - Do-While Loop Counter\n");
    
    printf("\n Enter your choice (A-E)\n");
    printf("=================\n");
    scanf("%c", &option);
    
    
    if(option == 'A' || option == 'a') {
    printf("\n>>> PERSONAL DETAILS <<<\n");
    printf("Name: Joaquin Phoenix A. Sayas\n");
    printf("Address: Austria Cmpnd, San Joaquin, Pasig City\n");
    printf("Contact No. 09773517110\n");
    printf("Birthday: 03/17/07\n");
    return 0;
    
}

    else if(option == 'B' || option == 'b' ) {
    int value;
    printf("\n>>> EVEN OR ODD CHECKER <<<\n");
    printf("Enter any number");
    scanf("%d", &value);
    
    if (value % 2 == 0)
    printf("%d is an EVEN number.\n", value);
    else
    printf("%d is an ODD number.\n", value);
    
    }
    
    else if (option =='C' || option =='c') {
    printf("\n>>> FOR LOOP <<<\n");
    for (int n = 1;n <=5; n++) {
        printf("Step %d\n",n);
    } 
    
    }
    
    else if (option == 'D' || option == 'd') {
        printf("\n>>> WHILE LOOP <<<\n");
        int count = 1;
        while (count<= 5) {
            printf("Count: %d\n", count);
            count++;
        }
    
    }
    
  else if (option == 'E' || option == 'e') {
    printf("\n>>> DO-WHILE LOOP <<<\n");
    int x = 1;
    do {
        printf("Number: %d\n", x);
        x++;
    } while (x <= 5);
    return 0;
}
    
    else {
        printf("Invalid Input! Please Select Only from [A-E]");
    
    }
}