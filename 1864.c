#include <stdio.h>
#include<string.h>
int main()
{
int a,i;
char ch[40]="LIFE IS NOT A PROBLEM TO BE SOLVED";
scanf("%d",&a);
for(i=0;i<a;i++)
{
    printf("%c",ch[i]);
}
printf("\n");
return 0;
}
