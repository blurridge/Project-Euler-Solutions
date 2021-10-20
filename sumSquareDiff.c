#include <stdio.h>

int main(){

    int sumOfSquares = 0, squareOfSum = 0, diff;

    for(int i = 1; i <= 100; i++)
    {
        sumOfSquares+=(i*i);
        squareOfSum+=i;
    }
    squareOfSum*=squareOfSum;
    diff = squareOfSum-sumOfSquares;
    printf("The difference between them is %d", diff);
    return 0;
}