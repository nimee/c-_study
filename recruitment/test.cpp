#include<iostream>
#include<vector>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
        /*
        char a[]={'a','b','c','d'};
        string b="abcdefg";
        cout<< a[0]<<endl;
        cout<<"数组长度："<<strlen(a)<<endl;
        cout << b.size()<<endl;
        cout <<"b[0]的值："<< b[0]<<endl;
        cout << "b[0]的值转换为整形："<<(int) b[0]<< endl;
        */
        /*检验char型数据相减*/
        /*
        char a='0';
        char b='9';
        int c=b-a;
        cout << "'9'-'0'的值为："<<c <<endl;
        */
        /*数组实验

        int matrix[3][2]={1,2,3,4,5,6};
        int (*p)[2]=matrix;
        p++;
        printf("%d\n",(*p)[1]);
        return 0;
        */
        /* reverse函数************
        string a="abcdefg";
        reverse(a.begin(),a.end());
        cout<< a[0]<<endl;
        */
        int arr[] = {6, 4, 8, 2, 1};
        int len = sizeof(arr) / sizeof(arr[0]);
        vector<int> ivec(arr, arr + len);
        vector<int>::iterator it;
        for( it=ivec.begin();it!=ivec.end();it++)
        {
                cout<<*it<<endl;
        }
        
}
