#include<stdio.h>

int main(){
/*     int i;
    int j;
    printf("How long do you want to loop?: ");
    scanf("%d", j);

    for(i = 0; i <= 5; i++){
        printf("%d\n", i);
    } */

    int i, j;
    int n = 4;
    
    for (i = 1; i <= n; i++){
        for (j = n; j >=1; j--){
            if(i >= j)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
return 0;
}