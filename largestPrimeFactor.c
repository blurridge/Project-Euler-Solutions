#include <stdio.h>
#include <math.h>

int main(){

    long long factor, max;
    int i;

    scanf("%lld", &factor);

    while(factor%2 == 0)
    {
        max = 2;
        factor/=2;
    }
    //removes all possible composite numbers

    for(i = 3; i <= factor; i+=2)
    {
        while(factor%i == 0)
        {
            max = i;
            factor/=i;
        }
    }
    printf("The largest prime factor is : %lld", max);
}