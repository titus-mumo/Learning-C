#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};
int main(){
    struct Student Student1;
    Student1.age = 22;
    Student1.gpa = 4.0;
    /*string copy function*/
    strcpy(Student1.name, "Jim");
    strcpy(Student1.major, "CS");
    printf("Name: %s\n", Student1.name);
    printf("Major: %s\n", Student1.major);
    printf("Age: %d\n", Student1.age);
    printf("GPA: %f\n", Student1.gpa);
    return 0;
}