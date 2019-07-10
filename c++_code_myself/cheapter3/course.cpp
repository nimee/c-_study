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
        cout << "输入你的花名";
        string name;
        cin >> name;
        cout << "hello," << name << endl;
        //读入期中和期末成绩
        cout << "输入你的期中和期末成绩";
        double midterm, final;
        cin >> midterm >> final;

        cout << "输入家庭作业成绩"
        "followed by end-of-file: " ;

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
        sort(homework.begin(),homework.end());
        vec_sz mid = size/2;
        double median;
        median = (size%2==0)? (homework[mid]+homework[mid-1])/2
                : homework[mid];
        streamsize prec = cout.precision();//结果精度保留
        cout << "你的最终成绩是" << setprecision(3)
                << 0.2* midterm +0.4* final + 0.4 * median 
                << setprecision(prec) <<
                0.2* midterm +0.4* final + 0.4 * median << endl;
        cout << "不保留精度最终成绩" << 0.2* midterm +0.4* final + 0.4 * median << endl;
        return 0;
                
}
