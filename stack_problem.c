#include<stdio.h>

struct stack{

int top;

int phone[10];
int age[10];
int sal[10];
}s;

void push(int n);
void display(int n);
void main(){
int n;
s.top=-1;
printf("Enter number of entries");
scanf("%d",&n);
int a=n;
while(a-->0){
    push(n);
}
display(n);
}

void push(int n){
    if(s.top==n-1)
        printf("Stack is full");
    else{
        int ag,ph,sa;

        printf("Enter person details in form of  age, phone number and salary");
        scanf("%d %d %d",&ag,&ph,&sa);
        s.top++;

        s.age[s.top]=ag;
        s.phone[s.top]=ph;
        s.sal[s.top]=sa;
    }
}

void display(int n){

    if(s.top==-1)
        printf("Stack is empty");
    else{
        char name[3][10]={
     "Aman",
     "adfhlksj",
     "dffslfl"
};
        printf("Name            Age        Phone                Salary\n\n");
        for(int i=n;i>=0;i--)
            printf("%s          %d      %d              %d\n",name[i],s.age[i],s.phone[i],s.sal[i]);
    }
}
