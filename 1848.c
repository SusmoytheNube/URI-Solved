#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,d,e,f,i,sum=0;
    char ch[10];

    for(i=1;i<=3;i++)
    {
        sum=0;
        while(1)
        {
            gets(ch);
            if(ch[0]=='c') break;

            if(ch[0]=='-')
            {
                if(ch[1]=='-')
                {
                    if(ch[2]=='-') sum+=0;
                    else sum+=1;
                }
                else
                {
                    if(ch[2]=='-') sum+=2;
                    else sum+=3;
                }
            }
            else if(ch[0]=='*')
            {
                if(ch[1]=='-')
                {
                    if(ch[2]=='-')sum+=4;
                    else sum+=5;
                }
                else
                {
                    if(ch[2]=='-') sum+=6;
                    else sum+=7;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
