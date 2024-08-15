/*Input hours , minutes and seconds as per 24 hour clock and print it as per 12 hour clock eg 23 hours 10 minutes 34 seconds output 11 : 10 : 34 pm*/

#include <stdio.h>
int main()
{
    int hr,min,sec;
    printf("\nenter hour : minutes : seconds in 24  hour clock system:-");
    scanf("%d %d %d",&hr,&min,&sec);
    if (hr==24)
    {printf("\n12:%d:%d am",min,sec);}
    if (hr==23)
    {printf("\n11:%d:%d pm",min,sec);}
    if (hr==22)
    {printf("\n10:%d:%d pm",min,sec);}
    if (hr==21)
    {printf("\n09:%d:%d pm",min,sec);}
    if (hr==20)
    {printf("\n08:%d:%d pm",min,sec);}
    if (hr==19)
    {printf("\n07:%d:%d pm",min,sec);}
    if (hr==18)
    {printf("\n06:%d:%d pm",min,sec);}
    if (hr==17)
    {printf("\n05:%d:%d pm",min,sec);}
    if (hr==16)
    {printf("\n04:%d:%d pm",min,sec);}
    if (hr==15)
    {printf("\n03:%d:%d pm",min,sec);}
    if (hr==14)
    {printf("\n02:%d:%d pm",min,sec);}
    if (hr==13)
    {printf("\n01:%d:%d pm",min,sec);}
    if (hr==12)
    {printf("00:%d:%d pm",min,sec);}
    else{printf("\n%d:%d:%d am",hr,min,sec);

    }
    return 0;
}
