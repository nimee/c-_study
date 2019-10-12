#include<iostream>
#include<cstring>
using namespace std;

int main()
{
        /*char *a;
        cin>>a;
        cout << "输入的a:" <<a<< endl;
        cout << "a第一个元素："<<a[0]<<endl;
       */ 
        //char a[]={'a','b','c','d','a','c','d','b'};
        //输入一组数据字符
        
        int m=0;
        char a[10];
        int  b[10];
        int  c[10];
        char k;
        int d=0;
        while(cin>>k)
        {
                a[m]=k;
                m++;
        }
        cout <<a<<endl;
       for(int i=0;i!=strlen(a);i++) 
       {
            if(i==0)
            {
                b[i]=i;
                c[i]=1;
            }
            else
            {
                for(int j=i-1;j!=-1;j--)
                {
                        if(a[j]==a[i])
                        {
                            d=i-j;
                            break;
                        }

                }
                if(d==0)
                {
                    b[i]=i;
                    c[i]=c[i-1]+1;
                }
                else 
                    if(d>c[i-1])
                    {
                            b[i]=i;
                            c[i]=c[i-1]+1;
                    }
                    else
                        {
                                b[i]=i;
                                c[i]=d;
                        }
            }
            d=0;//这个很关键
       }
       for(int i=0;i!=sizeof(c)/sizeof(c[0]);i++)
       {
            cout<< c[i]<<endl;
       }

}
