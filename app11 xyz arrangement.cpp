#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x,y,z,emp;
	printf("請輸入三個數字:\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		emp=x;
		x=y;
		y=emp;
	}
	if(x>z)
	{
		emp=x;
		x=z;
		z=emp;
	}
	if(y>z)
	{
		emp=y;
		y=z;
		z=emp;
	}
	printf("從小到大的排列是:%d %d %d\n",x,y,z);
	
	return 0;
}

