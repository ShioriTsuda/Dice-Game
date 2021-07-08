#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100

int main(void){

    int s1,s2,total;
    char name[N];

    printf("What is your name?\n");

    scanf("%s", name);

    printf("Hello, %s!\n",name);

    srand(time(NULL));

    s1 = rand() % 6 + 1;
    s2 = rand() % 6 + 1;

    printf("Die1: %d\n", s1);
    printf("Die2: %d\n", s2);

    total = s1 + s2;

    printf("Total value: %d", total);
    
    return 0;
}
