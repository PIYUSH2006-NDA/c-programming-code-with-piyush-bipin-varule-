/*Input hours , minutes and seconds as per 24 hour clock and print it as per 12 hour clock eg 23 hours 10 minutes 34 seconds output 11 : 10 : 34 pm*/

#include <stdio.h>
int main()
{
    int year;
    printf("\nenter year to check it is leap year or not:-");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0)|| (year%400==0))
    {printf("this is leap year %d",year);}
    else{printf("this is not a leap year%d",year);

    }
    return 0;
}
