#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //ex 1
    int grades[] = {80,65,23,99,48,14};
    printf("%d\n", grades[2]);
    grades[2] = 90;
    printf("%d\n", grades[2]);
    
    //ex 2
    float distance[] = {72.1, 12.5, 30.4, 23.56};

    //ex 3
    char names[][20] = {"kasen", "abby", "kelsee", "jared", "danny", "jed", "jake"};
    printf("%s\n", names[5]);

    // for loop ex 1
    for(int i = 20; i >= 0; i--){
        printf("%d ", i);
    }

    //for loop ex 2
    int grade_len = sizeof(grades)/ sizeof(grades[0]);
    for(int index = 0; index < grade_len; index++){
        printf("\n%d", grades[index] + 5);
    }

    //for loop ex 3
    srand(time(NULL));
    int goose = rand() % 15 +1;
    int count = 1;
    for(count; count < goose; count++){
        printf("Duck\n");
    }
    printf("GOOSE!\n");

    return 0;
}