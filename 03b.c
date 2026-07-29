// WAP to find sum of all the elements lies below the principle diagoal.
# include<stdio.h>
int main(){
    int i,j,n,A[20][20],sum=0;
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
        if(i>j){
            sum=sum+A[i][j];
        }}
}
printf("sum is %d",sum);
return 0;
}
