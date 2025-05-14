#include <stdio.h>
int main(){
int rev=0,rem,n,ori;
printf("enter the numner to chech it is palindrome or not:- \n");
scanf("%d",&n);
ori=n;
while(n!=0){
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if (ori==rev){
     printf("it is a plindrome");
}
else{
     printf("it is not a plaindrome");
}

return 0;
}
