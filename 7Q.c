#include<stdio.h>
int hcf(int,int);
int main(){
    int a,b;
    printf("Enter any two numbers : ");
    scanf("%d %d",&a,&b);
    printf("%d",hcf(a,b));
    return 0;
}
int hcf(int a,int b){
    if(b){
        hcf(b,a%b);
    } 
    else{
        return a;
    }
}
