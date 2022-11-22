#include "Numclass.h"

int getLength(int a){
    int count =0;
    while(a!=0)
    {
        a/=10;
        count++;
    }
    return count;
}
int isPalindrome(int palindrome){
  int len = getLength(palindrome);
  int ten = 1;
    for(int i = 0; i< len/2; i++)
    {   
        for(int j =0; j<len; j=j+2) ten*=10;
        if( palindrome /ten != palindrome % 10) {
            return 0;
        palindrome =palindrome%ten;
        palindrome = palindrome/10;
        
    }
  }
      return 1; 
}
int isArmstrong(int armstrong){
    int saved = 0;
    int len = getLength(armstrong);
    int saveArmstrong = armstrong;
    int count = 1;
    int finalCount = 0;
    while(armstrong != 0){
        saved = armstrong %10;
        armstrong /=10;
        for(int i =0;i<=len;i++){
            count *= saved;
        }
        finalCount += count;
        count =1;  
    }
    if(saveArmstrong == finalCount) return 1;
    return 0;

}
