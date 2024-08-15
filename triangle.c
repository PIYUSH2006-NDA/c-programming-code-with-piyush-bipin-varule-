#include <stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter the value of side1,side2,side3:--");
    scanf("%d %d %d",&s1,&s2,&s3);
    if (s1==s2 && s2==s3)
    { 
        printf("it is an equilateral triangle\n");
    }
   if ((s1 == s2 && s2 != s3) || (s1 == s3 && s3 != s2) || (s2 == s3 && s3 != s1))
    {
        printf("it is an isosceles triangle\n");
    }
   if (s1 != s2 && s2 != s3 && s1 != s3) {
        printf("it is a scalene triangle\n");
    }
    return 0;
}
