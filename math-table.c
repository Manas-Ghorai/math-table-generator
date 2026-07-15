#include<stdio.h>
void main()
{
    int a,b ,c,d,i ,f,chk;
    printf(" let put the value of 1st no(a)=");
    scanf("%d",&a);
    printf("let put the value of 2nd no(b)=");
    scanf("%d",&b);
    c=a+b;
    printf(" \noption-1: here you can nsee the value of a+b, c=%d",c);
    d=a-b;
    printf(" \noption-2: here you can see the value of a-b, d=%d",d);
     printf(" \nnow put the the option of which you want to make the table=");
     scanf("%d",&chk);
     switch(chk)
     {
        case 1: printf("\nhere you can see the table of that numer which you selected in the above options=");
        for(i=1; i<=c*10; i++)
        {if( i % c == 0)
            {
                printf("%d \n",i);
            }
        }
        break;
        case 2: printf("here you can see the table of that numer which you selected in the above options=");
        for(f=1; f<=10; f++)
        {printf("%d\n",f*d);
           
        }break;
        default: printf("\n put the correct options gioven above");
     }
}