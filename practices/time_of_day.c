#include <stdio.h>
#include <string.h>

int main(){
    int time = 0;

    printf("what time of day is it in milatary time: ");
    scanf("%d", &time);

    if (time >= 16){
        printf("Good evening\n");
    }else if (time >= 12){
        printf("Good afternoon!\n");
    }else{
        printf("Goodmorning\n");
    }
        
    




    return 0;
}