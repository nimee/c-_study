#include<iostream>//结构体对齐测试
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
/*********************************多继承虚函数，存储对象模型*******************
class ClassA{
    public:
        virtual ~ClassA(){};
        virtual void FunctionA(){};
    };
    class ClassB{
    public:
        virtual void FunctionB(){};
    };
    class ClassC:public ClassA, public ClassB{
        public:
    };
ClassC Object;
    ClassA* pA = &Object;
    ClassB* pB = &Object;
    ClassC* pC = &Object;
    ****************************************************************************/
/************************************类继承
class A{
        public:
                void print(){
                        cout << "A:print()";
                }
};
class B:private A{
        public:
                void print(){
                        cout << "B:print()";
                }
};
class C:public B{
        public:
                void print(){
                        A::print();
                }
};*/
//int hour = 23, minute = 59;
//
//void print_time(void)
//{
//	printf("%d:%d in print_time\n", hour, minute);
//}
int main()
{
//        struct stu
//        {
//
//                char k;
//                int i;
//                float j;
//
//                double l;
//
//        }stu2;
//        struct MyStruct
//{
//    char a;
//    int b;
//    long double c;
//}my;
//        double p;
//        cout << sizeof(stu2)<<endl;
//        cout << sizeof(p) << endl;
//        cout << sizeof(my);
    //判断字符串输出
   // char a[]="abcdefg";
    //cin << a << endl;
    //cout << a <<endl;
    //
    //判断全局变量
//    print_time();
//	printf("%d:%d in main\n", hour, minute);
//	return 0;
//	*************** strchr和strstr函数*************
//char a[10]="hello";
//char b='e';
//char c[5]="llo";
//char *i=strstr(a,c);
//char *j=strchr(a,b);
//cout << i <<endl;
//cout << j << endl;
//************
//int *p(int);  //返回值为int型指针的声明
//****************一个 int (*p)[10]明明int *p就可以搞定
//int a[10]={1,2,3,4,5,6,7,8,9,10};
//cout << a << endl;
//cout << *a<< endl;
//cout << *a+1<<endl;
//cout << *(a+1) << endl;
//cout << a<< endl;
//cout << *a << endl;
//char b[]="hellowrld";
//char *p=b;
//cout << p <<endl;
//cout <<p[0] <<endl;
//********多继承情况下c++存储对象模型
//B b;
//b.print();      //结果 ，报错，无法访问A的类B私有继承类A。  2. 私有继承：类A的公有成员和保护成员都作为类B的私有成员，并且不能被类B的子类（如类C）所访问。
}
