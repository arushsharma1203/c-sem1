#include<stdio.h>
int main() {
    int g,a,z,w,k,l,r,q,b,f;
    float x,y;
    printf("GIVE COMMAND\n(1) for circle\n(2) for square\n(3) for rectangle\n");
    scanf("%d",&g);
    if(g==1)
    {
    printf("enter the value of radius of circle\n");
    scanf("%d",&r);
    x=22/7*(r*r);
    y=2*22/7*r;
    printf("area : %f\n",x);
    printf("perimeter : %f\n",y);
    }
    else if(g==2)
    {
    printf("enter the value of side of square\n");
    scanf("%d",&q);
    z=q*q;
    w=4*q;
    printf("area : %d\n",z);
    printf("perimeter : %d\n",w);
    }
    else if(g==3)
    {
    printf("enter the value of lenght and breadth of rectangle\n");
    scanf("%d%d",&l,&b);
    k=l*b;
    f=2*(l+b);
    printf("area : %d\n",k);
    printf("perimeter : %d\n",f);
    }
    else
    {
    printf("INVALID INPUT\n");
    }
    return 0;
}