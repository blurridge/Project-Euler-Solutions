#include <stdio.h>

int main(){

    int firstValue = 1, secondValue = 1, next, i = 0, sum = 0;
    while(firstValue + secondValue < 4000000)
    {
        if(i == 0)
        {
            next = firstValue;
            printf("%d ", next);
        }
        else
        {
            next = secondValue + firstValue;
            printf("%d ", next);
            firstValue = secondValue;
            secondValue = next;
        }
        if(next%2 == 0)
            sum+=next;
        i++;
    }
    printf("The sum is : %d", sum);
}