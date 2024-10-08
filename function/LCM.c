#include <stdio.h>
int gcd(int n,int m)
{
    if(m==0)
    {
        return n;
    }
    else
    {
        return gcd(m,n%m);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int g=gcd(n,m);
    printf("%d",(n*m)/g);
    
}
