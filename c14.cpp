#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
	{
		printf("%d is smallest",a);
	}
	if(b<a && b<c)
	{
		printf("%d is smallest",b);
	}
    if(c<a && c<b)
	{
		printf("%d is smallest",a);
	}
	return 0;
}
