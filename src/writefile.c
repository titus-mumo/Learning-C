#include <stdio.h>

int main(){
    FILE * fpointer = fopen("employees.txt", "a");
    /*
    w---> write
    a---> append
    r---> read
    */
    fprintf(fpointer, "\nKelly, Customer Service");
    fclose(fpointer);
    return 0;
}