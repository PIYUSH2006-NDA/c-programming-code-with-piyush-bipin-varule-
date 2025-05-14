//call by value and call by reference
#include <stdio.h>
void swap(int *x,int *y){
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
     return 0; 
}
int main(){
     int a=34;
     int b=54;
     printf("the value of a is %d \n the value of b is %d \n",a,b);
     swap(&a,&b);
     printf("and the value of a & b after swaping is :- %d & %d \n ",a,b);
return 0;
}
