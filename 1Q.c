#include<stdio.h>
int func(int);
int main(){
    int n,sum;
    printf("Enter the nth term of natural numbers : ");
    scanf("%d",&n);
    sum=func(n);
    printf("%d",sum);
    return 0;
}
int func(int n){
    int sum=0;
    if(n==1){
        return 1;
    }
    return n+func(n-1);
}
