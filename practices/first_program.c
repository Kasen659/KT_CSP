//Kasen Thomas p.6 first program c
#include <stdio.h>

int main(){
    char name[] = "kasen";
    char user[50];

    printf("Tell me your name\n");
    scanf("%s", &user);

    printf("Welcome %s! This is your first program in C\n",user);
    return 0;
}