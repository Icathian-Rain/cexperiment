/*实验4-2程序修改替换题程序*/ 
#include<stdio.h> 
int max(int x, int y, int z);
float sum(float x, float y);  //函数在使用之前应该先声明
int main(void)
{
	int a, b, c;
  	float d, e;
  	printf("Input three integers:");
  	scanf("%d %d %d",&a,&b,&c);
  	printf("\nThe maximum of them is %d\n",max(a,b,c));
  	printf("Input two floating point numbers:");
	scanf("%f %f",&d,&e);
	printf("\nThe sum of them is  %f\n",sum(d,e));
	return 0;
}

int max(int x, int y, int z)					
{
	int m=z;
	if (x>y)
		if(x>z) m=x;
	else
    	if(y>z) m=y;
    return m;
}

float sum(float x, float y)
{
	return x+y;
}
