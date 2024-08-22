/*Q 2. Input to two numbers from the user and 
ask to choose the Operation from Addition, Multiplication, Division and Subtraction. Calculate and print the result accordingly.*/
#include<stdio.h>
int main()
{
    int choice;
    float n1,n2,add,sub,mul,div;
    printf("\nenter the two numbers:-");
    scanf("%f %f",&n1,&n2);
    printf("\npress 1 for addition");
    printf("\npress 2 for substraction");
    printf("\npress 3 for multiplication");
    printf("\npress 4 for division");
    printf("\nenter your choice:-");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        add=n1+n2;
        printf("\naddition of the two no. is:-%f\n",add);
        break;
         case 2:
        add=n1>n2;
        printf("\nSubtraction of the two no. is:-\n%f",n1-n2);
        break;
        case 3:
        add=n1<n2;
        printf("\nSubtraction of the two no. is:-\n%f",n2-n1);
        break;
         case 4:
        add=n1*n2;
        printf("\nMultiplication of the two no. is:-\n%f",mul);
        break;
         case 5:
        add=n1>n2;
        printf("\ndivision of the two no. is:-\n%f",n2/n1);
        break;
        case 6:
        add=n1<n2;
        printf("\ndivision of the two no. is:-\n%f",n1/n2);
        break;
        default:
        printf("\nincorrect value entered\n");
    }
return 0;

}