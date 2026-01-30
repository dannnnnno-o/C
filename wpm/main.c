#include <stdio.h.>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int sleep_time(int wpm){
    double st = 60.0/(double)wpm;
    return (int)(st * 1000.0);
}

int main(){
    system("cls");
    FILE *text = fopen("text.txt", "r"); 
    char buf[256];
    int wpm = 400;
    // printf("%d", sleep_time(60));
    // char str[] = "The quick brown fox jumps over the lazy dog";
    char *token;
    
    while(fgets(buf, sizeof(buf), text) != NULL){
        token = strtok(buf, " ");
        while(token != NULL){
            int token_last_char = strlen(token) - 1;
            system("cls");
            if(token[token_last_char] == '\n' | token[token_last_char] == '.'){
                if(token[token_last_char] == '\n'){
                    token[token_last_char] = '\0';
                    printf("%s", token);
                    Sleep(1000);
                    printf("-");
                    Sleep(1000);
                    printf("-");
                    Sleep(1000);
                    printf("-");
                }
                else{
                    // printf("newline\n");
                    printf("%s", token);
                    Sleep(1000);
                }
                token = strtok(NULL, " ");
                continue;
            }
            printf("%s", token);
            Sleep(sleep_time(wpm));
            token = strtok(NULL, " ");
        }
    }

    return 0;
}