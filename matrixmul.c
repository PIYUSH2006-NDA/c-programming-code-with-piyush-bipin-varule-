#include <stdio.h>
#include<stdlib.h>
int main()
{     
     int a[3][4], b[4][2], r[4][2];
     int sum ;
     printf("this is for matrix 1st\n");
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 4; j++)
          {
               printf("enter the value of a[%d][%d]= ", i, j);
               scanf("%d", &a[i][j]);
          }
     }
      printf("this is for matrix 2nd\n");
     for (int i = 0; i < 4; i++)
     {
          for (int j = 0; j < 2; j++)
          {
               printf("enter the value of b[%d][%d]= ", i, j);
               scanf("%d", &b[i][j]);
          }
     }
      printf("this is for matrix multiplication\n");
     for (int i = 0; i <3; i++)
     {
          for (int j = 0; j < 2; j++)
          {
               sum = 0;
               for (int k = 0; k < 4; k++)
               {
                    sum += a[i][k] * b[j][k];
               }
               r[i][j] = sum;
          }
          for (int i = 0; i < 4; i++)
          {
               for (int j = 0; j < 2; j++)
               {
                    printf(" %d", r[i][j]);
               }
               printf("\n");
          }
          return 0;
     }}
