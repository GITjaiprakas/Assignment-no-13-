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
    int s;
    if(a>=1){
        s=(2*a-1)+sum(a-1);
        return s;
    }
}
