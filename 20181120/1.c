#include<stdio.h>
int Fib(int n);
int sum(int n);
int main()
{
	int x,n;
	printf("please input number N(1<=N<=1000000000):");
	scanf("%d",&n);
	x=Fib(n);
	printf("%d",sum(n));	
 } 
int Fib(int n)
{
	if(n%2==0)
	return Fib(n/2);
	else
	return n;
}
int sum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	sum=sum+Fib(i);
	return sum;
}
