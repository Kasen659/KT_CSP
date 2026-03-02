//loops
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    //example 1
    int i = 1;
    while (i <= 10){
        printf("%d\n", i);
        i++;
    }

    // get randome num
    srand(time(NULL));

    printf("%d\n", (rand() % 5) + 5);
    printf("%d\n", (rand() % 10) + 1);
    printf("%d\n", rand() % 11);

    //ex 2
    int goose = rand() % 10 +1;
    int count = 1;

    while (count < goose){
        printf("duck\n");
        count++;
    }
   printf("GOOSE!\n");

   // ex 3
   int number = rand() % 20 + 1;

   while (true){
        int guess;
        printf("Guess a number 1-20: ");
        scanf("%d", &guess);
        if(guess == number){
            printf("you win the number was %d\n", number);
            break;
        }else if(guess < number){
            printf("your number is to low try again\n");
        }else{
            printf("your number is two high try again\n");
        }
   }
    


    return 0;
}
