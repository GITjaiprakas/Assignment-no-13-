#include<stdio.h>
int power(int b,int p);
int main(){
    int b,p;
    printf("Enter the base and exponent : ");
    scanf("%d %d",&b,&p);
    printf("%d",power(b,p));
    return 0;
}
int power(int b,int p){
    int xn;
    if(p){
        xn=b*power(b,p-1);
        return xn;
    }
    else{
        return 1;
    }

}
