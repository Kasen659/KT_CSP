#include <stdio.h>
#include <string.h>

int main(){
    char person[20];
    int age;
    char action[20];
    char sentince[100];

    printf("Name a person in the room: ");
    scanf("%s", &person);

    printf("An action that you want them to do: ");
    scanf("%s", &action);
    
    printf("Give them an age: ");
    scanf("%d", &age);
    
    strcat(sentince,"my name is " );
    strcat()
    
    printf("My name is %s and im %d years old. And i like to %s.\n", person, age, action);
    
    return 0;
}