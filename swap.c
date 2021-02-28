#include<stdio.h>
void main()
{
int a,b;
printf("enter the first and second no.");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the nimber after swapping is",a,b);
return 0;
}
