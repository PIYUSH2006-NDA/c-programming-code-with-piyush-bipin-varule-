/*Q 1. WAP to input length and breadth of a Rectangle Ask user to choose from Area and Perimeter, accordingly show the result.*/
#include<stdio.h>
int main()
{
    int choice;
    float area,perimeter,l,b;
    printf("\nenter length:-");
    scanf("%f",&l);
    printf("\nenter breath:-");
    scanf("%f",&b);
    printf("\npress 1 for area of a rectangle");
    printf("\npress 2 for perimeter of a rectangle");
    printf("\nenter your choice:-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        area=l*b;
        printf("\nthe area of the rectangle is:-%f",area);
        break;
        case 2:
        perimeter=2*(l+b);
        printf("\nthe perimeter of the rectangle is:-%f",perimeter);
        break;
    
    default:
        printf("\nincorrect value entered");
    }
    return 0;
        

}
