#include<stdio.h>
#include<math.h>
int county(int x)
{   int l=-1;
    long long y=x;
    while(y!=0)
    {
        long long rem=y%10;
        l+=1;
        y/=10;
    }
    return l;
}
int reverse(int x){
if(x<pow(2,31)-1 || x >-pow(2,31))
{
    long long p=0;
int count=county(x);
long long b=pow(10,count);
while(x!=0){
    long long rem=x%10;
    p+=(rem*b);
    x/=10;
    b/=10;
}
return p;
}
else
{
    return 0;
}

}
int main(){
  int x;
  scanf("%d",&x);
  printf("the reversed number is %d",reverse(x));
}
