#include<stdio.h>
#include<math.h>

int main(){
    char color[20];
    char song[20];
    char celebrity[20];
    printf("Enter your favorite color: ");
    scanf("%s", &color);
    printf("Enter your favorite song: ");
    scanf("%s", &song);
    printf("Enter your favorite celebrity: ");
    scanf("%s", &celebrity);
    printf("\n");
    printf("My favorite color is %s\n", color);
    printf("My best song is %s\n", song);
    printf("%s is my celebrity crush", celebrity);

    return 0;
}