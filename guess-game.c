#include <windows.h>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int main(){
    SetConsoleOutputCP(65001);
    srand(time(NULL));
    int pcnum=(rand()%100)+1;
    // ^ рандомное число ^
    int num;
    printf("Привет! Я загадал число от 1 до 100, попробуй угадать: \n");
    scanf("%d",&num);
    while(num!=pcnum){ 
        if (num<pcnum){
            printf("Ты не угадал, моё число больше твоего, попробуй ещё раз: ");
            scanf("%d",&num);}
        else if(num>pcnum){
            printf("Ты не угадал, моё число меньше твоего, попробуй ещё раз: ");
            scanf("%d",&num);}
    }
    printf("Ты угадал, это было число %i",pcnum);
    while(getchar() != '\n');
    getchar();
    return 0;
}