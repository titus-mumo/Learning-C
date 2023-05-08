#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*return statements in c*/
int cube(int num){
    int solution = pow(num, 3);
    return solution;
}

int main(){
    printf("Answer: %d", cube(90));

    return 0;
}