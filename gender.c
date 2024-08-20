/*TO INPUT GENDER OF A PERSON HAS M/F ALSO INPUT AGE CHECK IF THE PERSON IS RETIRED OR NOT ASUMING RETIERMENT AGE FOR MALE IS 60 AND FEMALE IS 56*/
# include <stdio.h>
int main()
{
    char gender;
    int age;
    printf("\nenter your gender and age \n");
    scanf("%c  %d",&gender,&age);
    if ((gender=='M' && age>=60) ||  (gender=='F' && age>=56)){
         printf("\nYou are a retired person, take care 👴\n");
    }
    
    else{
        printf("\nwork hard and make future better your are not retired👦 \n");
        }
    return 0 ;
    

}