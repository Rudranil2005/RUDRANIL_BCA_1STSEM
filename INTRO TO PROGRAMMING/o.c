
#include<stdio.h>
int main(){
    float i,n,sum=0;
    printf("ENTER THE VALUE OF N : \n");
    scanf("%f",&n);
    for(i=1;i<n;i++){
        sum=sum+i/(n*n);
    }
    printf("THE SUM OF THE SERIES IS : %f",sum);

    
}