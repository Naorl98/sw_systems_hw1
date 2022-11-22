#include "Numclass.h"
#include <math.h>
int isArmstrong(int arms){
    int length = len(arms);
    int num =  findAms( arms, length);
    if(num == arms) return 1;
    else return 0;
}

int findAms(int num, int length){
    if(num <10) return pow((double)num,(double)length);
    double pows =  pow((double)(num%10),(double)length);
    return pow((double)(num%10),(double)length) + findAms(num/10,length);
}
int len(int l){
     if(l == 0) return 1;
    return 1+ len(l/10);
}
int getTenLength(int a){
    if(a == 0) return 1;
    return 10 * getTenLength(a/10);
}
int isPalindrome(int poli){
    if(poli < 10) return 1;
    else if (poli%10 != poli/getTenLength(poli)) return 0;
    poli = poli % poli/getTenLength(poli);
    poli = poli /10;
    return isPalindrome(poli);

}