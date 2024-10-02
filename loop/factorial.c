#include<stdio.h>
int main()
{
      int n, i;
      long int fact=1;
      printf("Enter Number : ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
            fact=fact*i;
      }
      printf("\nFactorial of %d : %ld",n,fact);
      return 0;
}
