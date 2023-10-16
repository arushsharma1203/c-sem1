#include<stdio.h>
int main(){
int a,b;
printf("enter value of a and b");
scanf("%d%d",&a,&b);
int dif=a-b;
printf("The difference of %d and %d is %d\n",a,b,dif);
int sum=a+b;
printf("The sum of %d and %d is %d\n",a,b,sum);
int product=a*b;
printf("The product of %d and %d is %d\n",a,b,product);
int remainder=a%b;
printf("The remainder of %d and %d is %d\n",a,b,remainder);
return 0;
}