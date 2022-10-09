#include<stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    printf("%d\n", sum(n));
    return 0;
}
int sum(int a){
    if(a == 0){
        return 0;
    }
    return a%10+sum(a/10);
}
