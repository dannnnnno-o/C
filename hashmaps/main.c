#include <stdio.h>




int main(){

    // printf("This file is for practicing hash maps on C");
    
    /* 
    suppose we want to sign users up
    */

    typedef struct {
        char *username;
        char *password;
    }  User;


    User accounts[5];

    printf("Do you want to sign up?(y/n): ");
    char signup;
    scanf("%c", &signup);

    if(signup == 'y'){
        
    }



    User user1;
    user1.username = "user1";
    user1.password = "password";
    User user2;
    user2.username = "user2";
    user2.password = "password";

    accounts[0] = user1;
    accounts[1] = user2;


    /* 
    then log them in whenever they want
    */
    


    return 0;
}