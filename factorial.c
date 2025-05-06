#include<stdio.h>
int fact(int n){
if (n==1 || n==0)
return 1;
else
return (n*fact(n-1));}
int main() {
    int f,n;
    printf("enter the the value of number you want to find the factorial :- ");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of the number is :- %d",f);
    return 0;
}
