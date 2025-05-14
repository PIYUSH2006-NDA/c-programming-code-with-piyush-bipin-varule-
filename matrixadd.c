#include <stdio.h>
#include<stdlib.h>
int main()
{
     int a[20][20], b[20][20], c[20][20], r1, r2, c1, c2;
     printf("enter how many rows and coloumn you want in your 1st matrix:- \n");
     scanf("%d%d", &r1, &c1);
     printf("enter how many rows and coloumn you want in your 2nd matrix:- \n");
     scanf("%d%d", &r2, &c2);
     if (r1 == r2 && c1 == c2)
     {
          for (int i = 0; i < r1; i++)
          {
               for (int j = 0; j < c1; j++)
               {
                    printf("a[%d][%d]=", i,j);
                    scanf("%d",&a[i][j]);
               }
          }
          for (int i = 0; i < r2; i++)
          {
               for (int j = 0; j < c2; j++)
               {
                    printf("b[%d][%d]=", i,j);
                    scanf("%d",&a[i][j]);
               }
          }
          for (int i = 0; i < r1; i++)
          {
               for (int j = 0; j < c1; j++)
               {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("\t%d", c[i][j]);
               }
               printf("\n");
          }
     }
     else{
          printf("matrix addition is not possible :(");}
     
     return 0;
}
