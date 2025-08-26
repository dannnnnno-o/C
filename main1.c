#include <stdio.h>

int main(){

char a = 'y';
int x;

while(a != 'n'){
    printf("Enter a number: ");
    int y = scanf("%d", &x);
    while(y != 1){
        printf("Enter a number: ");
        int y = scanf("%d", &x);
    }

    if(x > 0){
        printf("Your number is positive ");
        int oddOrEven = x % 2;
        if (oddOrEven == 0){
            printf("and even.\n");
        }
        else if (oddOrEven == 1){
            printf("and odd.\n");
        }
    }

    else if(x < 0){
        printf("Your number is negative ");
        int oddOrEven = x % 2;
        if(oddOrEven == 0){
            printf("and even.\n");
        }
        else if(oddOrEven == 1){
            printf("and odd.\n");
        }
    }

    else{
        printf("Invalid number.\n");
    }

    printf("Do you want to enter another number? (y/n): ");
    scanf(" %c", &a);

    while(a != 'y' || a != 'n'){
        printf("Invalid input.\n");
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &a);
        if(a == 'y' || a == 'n'){
            break;
        }
    }

    if(a == 'n'){
        printf("Thank you for using this program.");
        break;
    }

}
    return 0;
}

/*




scanf(int)

check if int is odd or even, and positive or negative.



    int age;
    int isAlive;
    int isRegistered;
    int isOldEnough;

    age = 72;
    isOldEnough = 0;
    isAlive = 1;
    isRegistered = 1;

    int key = isOldEnough << 2 | isAlive << 1 | isRegistered;
    switch(key){
        case 7:
            printf("You are eligible to vote.\n");
            break;
        case 3:
            printf("You do not meet the age requirements.\n");
            
    }


    printf("your key is %d", key);





approaches

scanf int age;
if(age > 18){
bool isOldEnough = true;
}

else{break}

scanf bool isAlive;

if (!isAlive) ==> break

else:
    scanf bool isRegistered;
    if(!isRegistered) ==> break
    else{
    You're allowed to vote.}



bytes used:

int age = 18;    // 00010010 | (1 << 1)



isAlive << 1
                        64 + 12
                        76
key = age << 2 // 01001000

bool = 
0/1


*/











/* 
    int age;
    bool isAlive;
    bool isRegistered;

    printf("What is your age?: ");
    if(scanf("%d", &age) != 1){
        printf("Invalid age.");
    }
    else{
        if(age < 18){ 
            printf("You can't vote because you're underage.");

            goto end;
        }

        printf("Are you alive? (0: false / 1: true): ");
        scanf("%d", &isAlive);


        if(!isAlive){
            printf("You can't vote because you're dead.");
        }
        else{
            printf("Are you a registered voter? (0: false / 1: true): ");
            scanf("%d", &isRegistered);
            if(!isRegistered){
                printf("You can't vote because you're not a registered voter.");
            }

            else{
                printf("You are eligible to vote a corrupt official");
            }

        }

    }
        end:
    return 0;
    }


        int key;
    int correctKey = 123;

    while(key != correctKey){
        printf("What's the key? (clue: 3 letters only): ");
        scanf("%d", &key);
    }

    printf("Nice one nigga!");


 */