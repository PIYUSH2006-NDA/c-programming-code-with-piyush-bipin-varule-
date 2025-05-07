#include <stdio.h>
int swap(int *x ,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return ;
}

int main() {
    int a=4,b=3;
    printf("the value of A and B is :- %d & %d\n",a,b);
    swap(&a,&b);
    printf("the value of A and B after swaping is :- %d & %d\n ",a,b);
    
    return 0;
}
