/*练习fget函数*/
#include<stdio.h>
int main()
{
        char a[80];
        char *p;
        char *q;
        char b[80];
        p=fgets(a,80,stdin);
        
        fputs(p,stdout);
        puts(p);
        while(q=fgets(b,80,stdin))
        {
                puts(q);
        }
}
