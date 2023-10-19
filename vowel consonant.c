#include<stdio.h>
int main(){
char z;
printf("enter the alphabet\n");
scanf("%c",&z);
if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u'){
    printf("alphabet is a vowel");
}
else{
    printf("alphabet is consonant");
}
}