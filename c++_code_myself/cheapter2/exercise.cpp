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
