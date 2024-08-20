/*TO INPUT % MARKS OF A STUDENT AND RANK IN "CET". IF STUDENT GETS MORE THAN 
60% AND A RANK LESS THAN OR EQUALS TO 500 WILL GET ADMISSION OTHERWISE NOT*/
# include <stdio.h>
int main()
{int rank,marks;
float per;
    printf("\nENTER your rank and marks in cet:-\n");
    scanf("%d %d",&rank,&marks);
    per=marks*60/100;
    if ((rank<=500) && (marks>per))
     {
         printf("\ncongrats you get qualified\n");
    }
    else{
        printf("\nsorry you are not qualified better luck next time  \n");
        }
    return 0 ;
    

}