#include <stdio.h>
#include "Numclass.h"

int main(){

    int start = 100;
    int end = 1000;
    printf("The Primes Numbers: =  ");
    for(int i = start; i<=end;i++){
        if(isPrime(i) == 1) 
            printf("%d, " ,i);
    }
    printf("/n");
     printf("The Strongs Numbers: =  ");
    for(int i = start; i<=end;i++){
        if(isStrong(i) == 1) 
            printf("%d, " ,i);
    }
    printf("/n");
     printf("The Armstrong Numbers: =  ");
    for(int i = start; i<=end;i++){
        if(isArmstrong(i) == 1) 
            printf("%d, " ,i);
    }
    printf("/n");
     printf("The Palindrome Numbers: =  ");
    for(int i = start; i<=end;i++){
        if(isPalindrome(i) == 1) 
            printf("%d, " ,i);
    }
    
}