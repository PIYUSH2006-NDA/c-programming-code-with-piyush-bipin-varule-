/*Input cost and quantity of a product 
Calculate amount as cost * quantity
discount should be calculated as
10% of the amount if amount is less tahn 3000
20% of the amount if amount is between 3000 to 5000
30% of the amount if amount is between 5000 to 8000
and 40 % of the amount for amount more than 8000
Claculate the Net amount to be paid and print the same*/
#include <stdio.h>
int main()
{
    int cost,quantity,discount;
    printf("\nenter cost and quantity of the product:-");
    scanf("%d %d",&cost,&quantity);
    cost=cost*quantity;
    printf("\nttl cost is:-%d",cost);
    if (cost<3000)
    {
        discount=cost*10/100;
    }
    if (cost>5000 || cost<8000)
    {
        discount=cost*30/100;
    }
    if (cost>3000 || cost<5000)
    {
        discount=cost*20/100;
    }
    if (cost>8000)
    {
        discount=cost*40/100;
        printf("\ndiscount is %d",discount);}
        {int netAmount = cost - discount;
    printf("\nNet amount to be paid:-%d", netAmount);

    }
    return 0;

}

