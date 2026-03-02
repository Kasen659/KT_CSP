#include <stdio.h>

int main(){
    //ex 1
    int grades[] = {80,65,23,99,48,14};
    printf("%d\n", grades[2]);
    grades[2] = 90;
    printf("%d\n", grades[2]);
    
    return 0;
}