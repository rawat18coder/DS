// WAP to merge two sorted array.

#include<stdio.h>
int main(){
    int a[20],b[20],c[20],n,m,j,i,k;
    printf("Enter number of elements of first array:");
    scanf("%d",&n);
    printf("Enter number of elements of second array:");
    scanf("%d",&m);
    
    printf("Enter first array element in ascending order:");
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter second array elements in ascending order:");
    for (j=0;j<=m-1;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0;j=0;k=0;
    while (i<n&&j<m)
    {

        if (a[i]<=b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }}
        while(i<=n-1){
            c[k]=a[i];
            i++;
          k++;        }

        while(j<=m-1){
            c[k]=b[j];
            j++;
            k++;
        }

for (i=0;i<=n+m-1;i++){
        printf("%d\t",c[i]);}

    }
