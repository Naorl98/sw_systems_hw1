#include <stdio.h>
#include "Numclass.h"

int main(){

    int start;
    int end;
    scanf("%d %d", &start, &end);
    printf("The Armstrong numbers are:");
    for(int i = start; i<=end;i++){
        if(isArmstrong(i) == 1) 
            printf(" %d",i);
    }
    printf("\n");
    printf("The Palindromes are:");
    for(int i = start; i<=end;i++){
        if(isPalindrome(i) == 1) 
            printf(" %d",i);
    }
    printf("\n");
    printf("The Prime numbers are:");
    for(int i = start; i<=end;i++){
        if(isPrime(i) == 1) 
            printf(" %d",i);
    }
    printf("\n");
    printf("The Strong numbers are:");
    for(int i = start; i<=end;i++){
        if(isStrong(i) == 1) 
            printf(" %d",i);
    }
    printf("\n");
}  
