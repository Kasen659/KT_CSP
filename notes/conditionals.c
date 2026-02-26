#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int grade = 97;
    bool isprogrammin = true;

    if (grade >= 90){
        if (grade > 93){
        printf("your grade is %d percent, thats an A\n", grade);
        }else{
            printf("your grade is %d percent, thats a A-\n", grade);
        }
    }else if (grade >= 80){
        printf("your grade is %d percent, thats an b\n", grade);
    }else if (grade >= 70){
        printf("your grade is %d percent, thats an c\n", grade);
    }else{
        printf("your grade is %d percent, thats an f\n", grade);
    }


    int num = 4;

    if (num < 10){
        printf("your number is %d, thats a single digeit number\n", num);
    }else if (num < 100){
        printf("your number is %d, thats a doble digeit number\n", num);
    }else if (num < 1001){
        printf("your number is %d, thats a triple digeit number\n", num);
    }else{
        printf("your number is %d, thats a big number");
    }
    
    char name[] = "andrew";

    if (strcmp(name, "andrew") == 0){
        printf("welcome admin!");
    }else{}
        printf("welcome %s!", name);
    return 0;
}