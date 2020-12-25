#include<stdio.h>
void main(){
int n;
printf("Enter size");
scanf("%d",&n);
int a[n][n];
printf("enter values\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        scanf("%d ",&a[i][j]);
}
printf("The matrix is \n\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
    printf("\n");
}

}

