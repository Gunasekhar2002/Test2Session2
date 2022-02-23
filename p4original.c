#include<stdio.h>
int input()
{
  int n;
  printf("enter nth value to find fibonacci series:");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a,b,fibos;
  a=0;
  b=1;
  fibos=a+b;
  for(int i=2;i<n;i++)
    {
      fibos=a+b;
      a=b;
      b=fibos;
    }
  return fibos;
}
void output(int n,int fibo)
{
  int a,b;
  a=0;
  b=1;
  if (n==1)
  {
    printf("the %d th positin in fibonacci series is %d",n,a);
      
  }
  if (n==2)
  {
    printf("the %d th positin in fibonacci series is %d",n,b);
      
  }
  else
  {
    printf("the %d th postion in fibonacci sereis is %d",n,fibo);
  }
}

int main()
{
  int n,fibov;
  n=input();
  fibov=find_fibo(n);
  output(n,fibov);
}