#include<stdio.h>
#include<limits.h>
int fun(int x)
{
long int num=0,z;
if(x<0)
z=-1;
else
z=1;
while(x!=0)
{
	int y=x%10;
	num=num*10+y;
	x/=10;
}
if(num<INT_MIN||num>INT_MAX)
return 0;

return num;
}

int main()
{
int n;
scanf("%d",&n);

printf("%d\n",fun(n));
}
