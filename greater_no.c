/*TO INPUT THREE NUMBERS AND FIND THE GREATEST OUT OF THAT */
# include <stdio.h>
int main()
{int N1,N2,N3;
    printf("\nENTER THREE NUMBERS\n");
    scanf("%d %d %d",&N1,&N2,&N3);
    if(N1>N2 && N3<N1) {
         printf("\nnumber  one is the greatest\n",N1);
    }
    else if (N2>N1 && N3<N2){
    printf("\nnumber 2nd is the greatest \n",N2);}
    else if (N1==N2 && N2==N3)
    {printf("\nall the numbers are same \n");}
    else{
        printf("\nnumber 3rd is the greatest \n",N3);
        }
    return 0 ;
    

}
