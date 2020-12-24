#include<stdio.h>
void main(){
printf("Menu\n\n");
printf("1) Burger,Rs 129\n");
printf("2) Pasta,Rs 179\n");
printf("3) Sandwich,Rs 149\n");
printf("4) Pizza,Rs 239\n");
printf("5) French Fries,Rs 99\n\n");
int c;
printf("Enter your choice\n");
scanf("%d",&c);
switch(c){
    case 1:printf("Food item - Burger\n");
           printf("Price - Rs 129");
           break;
    case 2:printf("Food item - Pasta\n");
           printf("Price - Rs 179");
           break;
    case 3:printf("Food item - Sandwich\n");
           printf("Price - Rs 149");
           break;
    case 4:printf("Food item - Pizza\n");
           printf("Price - Rs 239");
           break;
    case 5:printf("Food item - French Fries\n");
           printf("Price - Rs 99");
           break;
    default:printf("Invalid choice");
}
}
