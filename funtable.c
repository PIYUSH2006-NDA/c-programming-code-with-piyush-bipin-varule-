#include <stdio.h>
int f(int num)
{
     for (int i = 1; i <= 10; i++)
     {
          printf("%dx%d=%d\n", num, i, (num * i));
     }
}
int main()
{
     int n, t;
     printf("enter the number you want to find the table:- \n");
     scanf("%d", &n);
     t = f(n);

     return 0;
}
