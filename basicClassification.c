#include "Numclass.h"


int isPrime(int prime){
    for(int i=2; i<prime;i++){
        if((prime % i) == 0) return 0;
    }
    return 1;
}
int isStrong(int strong){
    int count = 1;
    int num = 0;
    int finalNum = 0;
    int saveStrong = strong;
    while(strong != 0){
       num = strong % 10;
       strong /= 10;
       for(int i=2; i<=num;i++){
        count *=i;
       } 
       finalNum +=count;
       count = 1;
    }
    if(finalNum == saveStrong) return 1;
    return 0;
}
