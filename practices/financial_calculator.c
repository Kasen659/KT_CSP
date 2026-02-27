#include <stdio.h>

int main(){
    float income = 0;
    float rent = 0;
    float utilities = 0;
    float groceries = 0;
    float transport = 0;

    printf("\nWhat is your monthly income:");
    scanf("%f", &income);

    printf("\nWhat is your monthly rent:");
    scanf("%f", &rent);
    
    printf("\nWhat is your monthly utilities spending:");
    scanf("%f", &utilities);

    printf("\nHow much do you spend on groceries monthly:");
    scanf("%f", &groceries);

    printf("\nWhat do you spend montly on transport:");
    scanf("%f", &transport);

    printf("\n");
   
    return 0;
}    