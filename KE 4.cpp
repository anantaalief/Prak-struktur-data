//ANANTA ALIEF R
//20051397074
//MI 2020 B
#include <stdio.h>
#include <stdlib.h>
int prima(int n, int i){
 if(n%i==0)
 return 0;
 if(i==2)
 return 1;
 prima(n, i-1);
}
int main()
{
 int i,n, output;
 printf("ANANTA ALIEF R\n");
 printf("20051397074\n");
 printf("MI 2020 B\n");
 printf("Input bilangan : ");
scanf("%d", &n);
 i=n-1;
 if(n!=1){
 if(prima(n, i) || n==2){
 puts("Bilangan tersebut prima");
 }
 else{
 puts("Bilangan tersebut bukan prima");
 }
 }
 else{
 puts("Bilangan tersebut bukan prima");
 }
 return 0;
}
