#include <stdio.h>
#include <stdlib.h>

int main(){
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[0] = 2;
    printf("%d", luckyNumbers[0]);
    return 0;
}