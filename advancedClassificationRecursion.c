#include "Numclass.h"
#include <math.h>
int isArmstrong(int arms){
    if(arms == 0) return 0;
    int length = len(arms);
    int num =  findAms( arms, length);
    if(num == arms) return 1;
    else return 0;
}

int findAms(int num, int length){
    if(num <10) return pow(num ,length);
    return pow((num%10),length) + findAms(num/10,length);
}
int len(int l){
     if(l < 10) return 1;
    return 1+ len(l/10); 
}
int reverse(int a, int new){
    if(a == 0 ) return new; 
    new = (new*10) + (a%10);
    return reverse(a/10, new);
}
int isPalindrome(int poli){
    if(poli == 0 ) return 0;
    if(poli <10) return 1;
    int newPoli = reverse(poli,0);
    if(newPoli == poli) return 1;
    else return 0;
}
