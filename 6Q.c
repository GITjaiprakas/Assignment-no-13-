#include<stdio.h>
long fact(int);
int main(){
    int num;
    long facts;
    printf("Please enter a number for factorial : ");
    scanf("%d", &num);
    facts = fact(num);
    printf("The factorial of the number %d is equal to : %ld\n", num, facts);
    return 0;
}
long fact(int a){
    if(a == 0)
        return 1;
    else
        return(a * fact(a-1));
}
