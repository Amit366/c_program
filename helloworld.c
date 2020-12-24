#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("Numbers after swapping\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
}
