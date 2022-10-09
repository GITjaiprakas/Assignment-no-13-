#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter the nth term of the natural number : ");
    scanf("%d",&n);
    printf("%d\n", sum(n));
    return 0;
}
int sum(int a){
    if(a==1){
        return 1;
    }
    return(a*a+sum(a-1));
}
