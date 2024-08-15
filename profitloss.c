/*n3) Input selling price and cost price of a product 
and print profit / loss / no profit no loss*/
#include <stdio.h>
int main()
{
    int cp,sp;
    printf("enter cost price and selling price:--");
    scanf("%d %d",&cp,&sp);
    if (sp==cp)
    { 
        printf("no profit no loss\n");
    }
   if (sp>cp)
    {
        printf("you sell this product in profit\n");
    }
   if (cp>sp) {
        printf("you sell this product loss\n");
    }
    return 0;
}