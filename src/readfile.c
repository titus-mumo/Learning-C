#include <stdio.h>

int main(){
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    fclose(fpointer);
    printf("%s", line);
    return 0;
}