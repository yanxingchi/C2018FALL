#include<stdio.h>
#define max 20
int main()
{
	int c=0,i=0,j=0,x=1,k,N;
	printf("请输入数组维数:\n");
    scanf("%d",&N);
	int a[max][max];
	k=N*N;
	while(x<=k)
{
		i=0;
		j=0;
	for(i+=c,j+=c;j<N-c;j++)
	{
		if(x>k)
		{
		break;
		}
		a[i][j]=x++;
	}
    for(j--,i++;i<N-c;i++)
	{
		if(x>k)
		{
			break;
		}
		a[i][j]=x++;
	}
	for(i--,j--;j>=c;j--)
	{
		if(x>k)
		{
			break;
		}
		a[i][j]=x++;
	}
	for(j++,i--;i>=c+1;i--)
	{
		if(x>k)
		{
			break;
		}
		a[i][j]=x++;
	}
	c++;
}
	for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	return 0;
}
