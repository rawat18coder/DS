// write a program to remove a element at any specified position in a given linear array.

#include<stdio.h>
int main(){
    int a[20],n,i,loc;
printf("Enter the number of element of array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<=n-1;i++)
{
    scanf("%d",&a[i]);
}  
printf("Enter the location to remove element");
scanf("%d",&loc);
 
for (i=loc;i<=n-1;i++)
{
    a[i-1]=a[i];
}
printf("Updated array:");
for(i=0;i<=n-2;i++){
    printf("%d",a[i]);
}
return 0;
}