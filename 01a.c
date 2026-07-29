// write a program to insert a new element at any specified position in a given linear array.

#include<stdio.h>
int main()
{
    int a[20],n,i,loc,ele;
    printf("Enter the no. of element of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<=n-1;i++)         //'n-1' for index value
    {
    scanf("%d",&a[i]);
    }
    printf("Enter location to insert and element to insert:");
    scanf("%d%d",&loc,&ele);
    for(i=n-1;i>=loc-1;i--){
        a[i+1]=a[i];
    }
      a[loc-1]=ele;

    printf("Updated array is");
    for(i=0;i<=n;i++)            // 'n' as one element is increased
    {
        printf("%d\t",a[i]);
    }
    return 0;
}    