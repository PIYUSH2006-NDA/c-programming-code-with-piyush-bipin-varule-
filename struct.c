#include <stdio.h>
struct stu{
    int id;
    char name[20];
    int roll;
};
int main(){
int n;
printf("Enter the numbers of student in the class:- \n");
scanf("%d",&n);
struct stu s[n];
for(int i=0;i<n;i++){
    printf("enter the ID of the student %d:- ",i+1);
    scanf("%d",&s[i].id);
    printf("enter the NAME of the student %c:- ",i+1);
    scanf("%s",&s[i].name);
    printf("enter the ROLL NO of the student %d:- ",i+1);
    scanf("%d",&s[i].roll);

}
for (int i=0;i<n;i++){

    printf("student %d:\nid= %d\nname= %s\nroll no.= %d\n",i+1,s[i].id,s[i].name,s[i].roll);
}
return 0;
}
