// 参考来源 https://blog.csdn.net/liuchen1206/article/details/6954074
#include<iostream>
#include<cstdlib>
using namespace std;
void quickSort(int a[],int,int);
int main()
{
int array[]={4,6,2,7,1,8,3},k;
int b= sizeof(array);
int a= sizeof(int);
int len=sizeof(array)/sizeof(int) ;//有玄机，size 和我想的不太一样 ，输出5 4 20
cout<<len<<"\n"<< a<< "\n "<<b<<endl;
quickSort(array,0,len-1);
for(k=0;k!=len;k++)
        cout<< array[k]<<",";
        cout<< endl;
return 0;
}

void quickSort(int s[], int l ,int r)   
{
    if(l < r)
    {
    int i=l,j=r,x=s[l];
    while(i<j)
    {
        while(i<j && s[j]>x)
        j--;
        if(i<j)
              s[i++]=s[j];
        while(i<j && s[i]<x)
        i++;
        if(i<j)
        s[j--]=s[i];
            }
        
        s[i]=x; 
        quickSort(s, l, i-1 );
        quickSort(s, i+1, r);
    }
}
