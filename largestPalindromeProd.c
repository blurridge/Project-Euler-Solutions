#include <stdio.h>

int palindromeCheck(int product){

    int newNum = 0, remainder;
    while(product != 0)
    {
        remainder = product%10;
        newNum = newNum*10 + remainder;
        product/=10;
    }
    return newNum;
}

int main(){

    int maxPalindrome = 0, i, j, product, palindrome;

    for(i = 100; i <= 999; i++)
    {
        for(j = 100; j <= 999; j++)
        {
            product = i*j;
            palindrome = palindromeCheck(product);
            if(palindrome > maxPalindrome && palindrome == product)
                maxPalindrome = palindrome;
        }
    }
    printf("The largest palindrome is : %d", maxPalindrome);
    return 0;
}