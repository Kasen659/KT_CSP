#include <stdio.h>
//ex 1
int x = 0;
void add(){
    x++;
}

//ex 2
float divide(int num_one, int num_two){
    return (float) num_one/ num_two;
}

//ex 3
void hello(char* name){
    printf("Hello %s. Welcome to my code!\n", name);
}

int main(){
    // ex 1
    add();
    add();
    add();
    add();
    add();
    printf("%d\n", x);

    //ex 2
    float quotiant = divide(8, 4);
    printf("%.2f\n", quotiant);
    printf("%.2f\n", divide(75,2));

    //ex 3
    hello("Kasen");
    hello("Kelsee");
    hello("Abby");
    hello("Danny");
    hello("Jared");

    return 0;
}