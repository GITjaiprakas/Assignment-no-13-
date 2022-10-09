#include<stdio.h>
int countDigits(int);
int main(void){
  int n,result;
  printf("What is the number?\n");
  scanf("%d", &n);
  result=countDigits(n);
  printf("%d\n", result);
  return 0;
}
int countDigits(int n){
  if(n<10){
    return 1;
  }
  else{
    return 1+countDigits(n/10);
  }
}
