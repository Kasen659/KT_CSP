// this is how you write a comment in C
#include <stdio.h> // lets you write inputs and outputs

int main(){
    int number = 8;
    const float pi = 3.14;
    char grade = 'A';
    char name[] = "kasen";
    char user[50];

    printf("Tell me your name\n");
    scanf("%s", &user);


    printf("Tell me how old you are:\n");
    scanf("%d", &number);

    printf("working!\n");
    printf("%d\n", number);
    printf("the digets of pi are: %f\n", pi);
    printf("your name is %s you are %d old. You have an %c in programing pi is %f\n",user ,number ,grade, pi);
    return 0;
}