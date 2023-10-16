#include <stdio.h>
int main() 
{
int a,b,c,d,e,f,g,h,i,j,z;

printf("enter value of a");
scanf("%d",&a);
b=a*a;
c=4*a;
printf("area of square %d\n",b);
printf("perimeter of square %d\n",c);

printf("enter value of d");
scanf("%d",&d);
e=22/7*d*d;
f=2*22/7*d;
printf("area of circle %d\n",e);
printf("perimeter of circle %d\n",f);

printf("enter value of g and z");
scanf("%d%d",&g,&z);
h=g*z;
i=2*g+2*z;
printf("area of rectangle %d\n",h);
printf("perimeter of rectangle %d\n",i);

return 0;
}