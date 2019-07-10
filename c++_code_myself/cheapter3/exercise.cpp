//习题 3-2
/*
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<ios>
#include<iomanip>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::streamsize;
using std::vector;
//using std::precision;
using std::setprecision;
using std::string;

int main()
{
        cout << "输入4 的倍数个数值" << endl;
        vector<double> homework;
        double x;
        while(cin >> x)
                homework.push_back(x);
        
        //检查Homework是否为空
        typedef  vector<double>::size_type vec_sz;
        vec_sz size = homework.size();
        if (size == 0){
                cout << endl << "你必须键入平时成绩"
                        << "再试一次" << endl;
        return 1;
        }
        //对成绩进行排序
        sort(homework.begin(),homework.end(),greater<int>());
        int n = size/4;
        int i,j;
        for(i=0;i!=4;i++)
        {
               for(j=0;j!=n;j++){
                    
               cout << homework[i*n+j] << ' ';
               
               }
               cout << endl;
        }
        vec_sz mid = size/2;
        return 0;               
}
*/
//习题 3-3
