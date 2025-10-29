#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Task{
char *id;
char *name;
char *tag;
char *deadline;
char *description;
int difficulty;
};

struct Task taskSearch(char *id, struct Task list[], int listSize);

void printTaskList(struct Task task[], int listLength);

void printTask(struct Task task);

void printStr(char str[], int strLength);

void printStrList(char *strList[], int strListLength);

void freeTask(struct Task tasks[]);


int main(){

/* struct Task task1;
struct Task task2;
task1.id = "1";
task1.name = "Cook Dinner";
task1.tag = "Personal";
task1.deadline = "10/23/25"; 
task1.description = "Prepare dinner by 8pm today";
task1.difficulty = 8;

task2.id = "2";
task2.name = "Finish MMW Worksheet";
task2.tag = "School";
task2.deadline = "11/6/25";
task2.description = "finish worksheet before final exam comes.";
task2.difficulty = 9.8; */
struct Task *tasks;
int listLength = sizeof(tasks)/sizeof(tasks[0]);
// printf("number of tasks: %d.\n", listLength);

//int taskLength = sizeof(task1)/sizeof(task1.name);

//printTask(tasks[0]);

//printTaskList(tasks, listLength);

//char str[] = "this is a string";
//int strLength = sizeof(str)/sizeof(str[0]);
//printStr(str, strLength);

//char *strList[] = {
//str,
//str
//};

//int strListLength = sizeof(strList)/sizeof(strList[0]);
//printStrList(strList, strListLength);

/* struct Task x = taskSearch(1, tasks, 2);
struct Task y = taskSearch(2, tasks, 2);
printTask(x);
printTask(y); */

FILE *file;

file = fopen("tasks.txt", "r");
char lineBuffer[255];
struct Task task;
int n = 0; //index
while(fgets(lineBuffer, sizeof(lineBuffer), file)){
    char *token = strtok(lineBuffer, "|");
    for(int i = 0; i < 4; i++){
        switch(i){
            case 0: printf("%s. ", token); task.id = strdup(token); break; //id 
            case 1: printf("%s--", token); task.name = strdup(token); break; // name
            case 2: printf("%s---", token); task.tag = strdup(token); break; //tag 
            case 3: printf("%s----\n", token); task.deadline = strdup(token); break; //deadline
            
        }
        token = strtok(NULL, "|");
    }
    tasks[n] = task;
    printf("id:%s for index %d.\n\n", task.id, n);
    n++;
}


printTask(taskSearch("5", tasks, listLength));

// printTaskList(tasks, listLength);

for(int i = 0; i < n; i++){
    freeTask(&tasks[i]);
}

return 0;
}

void freeTask(struct Task tasks[]){
    free(tasks->id);
    free(tasks->name);
    free(tasks->tag);
    free(tasks->deadline);
}

void printTask(struct Task task){
printf("%s-", task.name);
printf("%s--", task.tag);
printf("%s---\n", task.deadline);
/* printf("%s\n", task.description);
printf("%d/10\n\n", task.difficulty); */
}

void printTaskList(struct Task taskList[], int listLength){
   for(int i = 0; i < listLength; i++){
   printTask(taskList[i]);
   }
}


void printStr(char str[], int strLength){
    for(int i = 0; i < strLength; i++){
    printf("%c", str[i]);
    }
}

void printStrList(char *strList[], int strListLength){
   for(int i = 0; i < strListLength; i++){
   //printStr(strList[i]);
   }
}

struct Task taskSearch(char *id, struct Task list[], int listSize){
    struct Task selectedTask;
    for(int i = 0; i < listSize; i++){
       if(strcmp(id, list[i].id) == 0){
           selectedTask = list[i];
           return selectedTask;
       }
       else{
       continue;
       }
   }
}