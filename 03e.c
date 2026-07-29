// WAP to print a "X" matrix for a given square matrix.
# include<stdio.h>
int main(){
    int i,j,n,A[20][20];
printf("Enter no. of elements of square arrray:");
scanf("%d",&n);
printf("Enter elements for array A(row wise):");
for (i=0;i<=n-1;i++){
    for (j=0;j<=n-1;j++){
        scanf("%d",&A[i][j]);
    }
}
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
        if((i==j)||(i+j==n-1))
            printf("%d\t",A[i][j]);
        else
            printf(" \t");
    }
printf("\n");
}
return 0;
}