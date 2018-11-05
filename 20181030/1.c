#include<stdio.h>
void triangle_judge(int a,int b,int c);
int main() 
{   
	triangle_judge(int a,int b,int c);
	return 0; 
}
 void triangle_judge(int a,int b,int c)
{   
    printf("三角形三条边的长度a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
       {
    if(a!=b&&b!=c&&a!=c)
       	printf("三角形为普通三角形"); 
    if(a==b&&b==c)
         printf("三角形是等边三角形");
    else
         printf("三角形是等腰三角形");
       }
  else
  printf("不能形成三角形"); 
 
}
