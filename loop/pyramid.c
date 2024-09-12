#include<stdio.h>
int main(){
    int a,i,s,k=1,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(s=1;s<=a-i;s++){
            printf(" ");
        }
       k=i; 
        for(j=1;j<=i;j++){
            printf("%d",k++);
            
        }
        k=k-2;
        for(j=1;j<i;j++){
            printf("%d",k--);
        }
        printf("\n");
    }
}
