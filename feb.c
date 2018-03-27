#include<stdio.h>
main()
{
int a=0,b=1,c,i=0;
//printf("%d\n",c);
while(i<5)
{
c=a+b;

printf("%d\n",c);
a=b;
b=c;
i++;
}
}
