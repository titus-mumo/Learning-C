#include <stdio.h>
#include <stdlib.h>

void sayHi(char name [20], int age){
    printf("Hello %s, you are %d years old\n", name, age);
}

int main(){
    printf("Top\n");
    sayHi ("Titus Musembi", 20);
    sayHi("Jimmy", 16);
    printf("Bottom");
    return 0;
}

/*void function does not return anything*/
/*void sayHi(){
    char name[10];
    printf("Enter your name: \n");
    scanf("%s", &name);
    printf("Hello %s\n", name);
}*/

