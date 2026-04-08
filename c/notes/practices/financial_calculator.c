#include <stdio.h>

int main(){
    float income;
    float rent;
    float utilities;
    float groceries;
    float transport;
    
    
    
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
    float monthly_rent = (rent / income* 100); 
    printf("\nYou spend %.2f on rent that is %.1f percent of your income", rent, monthly_rent);
    float monthly_utilities = (utilities / income* 100);
    printf("\nYou spend %.2f on utilities that is %.1f percent of your income", utilities, monthly_utilities);
    float monthly_groceries = (groceries / income* 100);
    printf("\nYou spend %.2f on groceries that is %.1f percent of your income", groceries, monthly_groceries);
    float monthly_transport = (transport / income* 100);
    printf("\nYou spend %.2f on transport that is %.1f percent of your income", transport, monthly_transport);
    float save = (income * 0.1);
    printf("\n you should save %.2f that is 10 percent of your income", save);

    return 0;
}    