//习题2-5正方形
/*
#include<iostream>
#include<string>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "please 输入正方形边长" ;
    int a ;
    int i,j;
    cin >> a;
    for(i=0;i!=a;i++)
    {
            for(j=0;j!=a;j++)
            {
                    cout << "*";
                    if(j==(a-1))
                    {
                            cout << endl;
                    }
            }
                
    }

}
*/
//2-5 长方形
/*
#include<iostream>
#include<string>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "please 输入长方形长边边长" ;
    int a ;
    int b ;
    int i,j;
    cin >> a ;
    cout << endl;
    cout << "请输入长方形短边长";
    cin >> b;
    for(i=0;i!=b;i++)
    {
            for(j=0;j!=a;j++)
            {
                    cout << "*";
                    if(j==(a-1))
                    {
                            cout << endl;
                    }
            }
                
    }

}
*/
// 2-5 三角形  正方形，长方形一样的思路
/*
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
//    int a,b;
    cout << "输入三角形的边长";
    int length;
    cin >> length;
    const int a=length;
    const int b=2*a-1;
    int i,j;
    for(i=0;i!=a;i++)
    {
            std::string rows(2*i+1,'*'); //第一次写单引号错写为双引号
            for(j=0;j!=b;j++ )
            {
                    if(j!=a-i-1)
                    
                    {
                    cout << ' ';
                    }
                    else {
                        
                            cout << rows ;
                    }
            }
        
                    cout << endl;
    }

}
*/
// 2-7输出从10到-5的整数
/*
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
int i;
for(i=10;i!=-6;i--)
{
    cout << i << endl;
}
}
*/
//2-8 计算乘积
/*
#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
int i;
int s =1;
for(i=1;i!=10;i++)
{
        s=i*s;
        cout << s << endl;
}
}
*/
#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "请输入第一个数";
    int num1;
    cin >> num1;
    cout << "请输入第二个数";
    int num2;
    cin >> num2;
    cout << std::max(num2,num2) << endl;
  



}
/*
 *C++ 是在C语言的基础上开发的，早期的 C++ 还不完善，不支持命名空间，没有自己的编译器，而是将 C++ 代码翻译成C代码，再通过C编译器完成编译。这个时候的 C++ 仍然在使用C语言的库，stdio.h、stdlib.h、string.h 等头文件依然有效；此外 C++ 也开发了一些新的库，增加了自己的头文件，例如：

    iostream.h：用于控制台输入输出头文件。
    fstream.h：用于文件操作的头文件。
    complex.h：用于复数计算的头文件。


和C语言一样，C++ 头文件仍然以.h为后缀，它们所包含的类、函数、宏等都是全局范围的。

后来 C++ 引入了命名空间的概念，计划重新编写库，将类、函数、宏等都统一纳入一个命名空间，这个命名空间的名字就是std。std 是 standard 的缩写，意思是“标准命名空间”。

但是这时已经有很多用老式 C++ 开发的程序了，它们的代码中并没有使用命名空间，直接修改原来的库会带来一个很严重的后果：程序员会因为不愿花费大量时间修改老式代码而极力反抗，拒绝使用新标准的 C++ 代码。

C++ 开发人员想了一个好办法，保留原来的库和头文件，它们在 C++ 中可以继续使用，然后再把原来的库复制一份，在此基础上稍加修改，把类、函数、宏等纳入命名空间 std 下，就成了新版 C++ 标准库。这样共存在了两份功能相似的库，使用了老式 C++ 的程序可以继续使用原来的库，新开发的程序可以使用新版的 C++ 库。

为了避免头文件重名，新版 C++ 库也对头文件的命名做了调整，去掉了后缀.h，所以老式 C++ 的iostream.h变成了iostream，fstream.h变成了fstream。而对于原来C语言的头文件，也采用同样的方法，但在每个名字前还要添加一个c字母，所以C语言的stdio.h变成了cstdio，stdlib.h变成了cstdlib。
 *
 * /
 
