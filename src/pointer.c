#include <stdio.h>

int main(){
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * aGrade = &grade;
    printf("%p\n", pGpa);
    /*dereferencing pointer*/printf("%f", *pGpa);
    return 0;
}

/*dereferencing pointers*/