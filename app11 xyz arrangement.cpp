#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x,y,z,emp;
	printf("�п�J�T�ӼƦr:\n");
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
	printf("�q�p��j���ƦC�O:%d %d %d\n",x,y,z);
	
	return 0;
}

