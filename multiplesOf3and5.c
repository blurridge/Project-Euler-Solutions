#include <stdio.h>

int main(){

    int a = 999, sum = 0;
    while(a > 0)
    {
        if(a%3 == 0 || a%5 == 0)
            sum+=a;
        a--;
    }
    printf("%d", sum);
}