/*Q 3.Input a month number from the user and print the number of days in the given month number*/
#include<stdio.h>
int main()
{
    int month;
    printf("\nenter the month no.:-");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("\nthe no. of days in jan month is 31.\n");
        break;
        case 2:
            printf("The number of days in February is 28 or 29 in leap.\n");
            break;
        case 3:
            printf("The number of days in March is 30.\n");
            break;
        case 4:
            printf("The number of days in April is 30.\n");
            break;
        case 5:
            printf("The number of days in May is 31.\n");
            break;
        case 6:
            printf("The number of days in June is 30.\n");
            break;
        case 7:
            printf("The number of days in July is 31.\n");
            break;
        case 8:
            printf("The number of days in August is 31.\n");
            break;
        case 9:
            printf("The number of days in September is 30.\n");
            break;
        case 10:
            printf("The number of days in October is 31.\n");
            break;
        case 11:
            printf("The number of days in November is 30.\n");
            break;
        case 12:
            printf("The number of days in December is 31.\n");
            break;
        default:
            printf("Invalid month number!.\n");
            break;
            
    }
    return 0;


}

