/*Q 4. Input a number from the user and check if it is even or odd using switch.*/
#include<stdio.h>
int main()
{
    int num,even;
    printf("enter the number:-");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
        even=(num==0);
        printf("it is the even number");
        break;
        default:
        printf("it is the odd number");


    }
    return 0;

}
