#include <stdio.h>
int main(){
    int ttl,q,itn;
    printf("welcome to vending machine\n");
    printf("press 1 :-  lays chips  ------> 20/-\n");
    printf("press 2 :-  jim jam     ------> 50/-\n");
    printf("press 3 :-  smooth      ------> 20/-\n");
    printf("press 4 :-  chips       ------> 10/-\n");
    printf("press 5 :-  uncle chips ------> 20/-\n");
    printf("press 6 :-  mazza       ------> 50/-\n");
    printf("press 7 :-  kitkat      ------> 30/-\n");
    printf("enter the item number you want to buy\n");
    scanf("%d",&itn);
    printf("enter the quantity of the item\n");
    scanf("%d",&q);
    switch(itn){
        case 1:
        ttl= 20*q;
        break;
        case 2:
        ttl= 50*q;
        break;
        case 3:
        ttl=20*q;
        break;
        case 4:
        ttl= 10*q;
        break;
        case 5:
        ttl= 20*q;
        break;
        case 6:
        ttl= 50*q;
        break;
        case 7:
        ttl= 30*q;
        break;
        default:
            printf("you enter the wrong input please enter a valid input\n");
            return 1;
    }
        printf("yummy you choose very good option\n");
        printf("total to be paid is :- %d\n",ttl);
    
return 0;
}
