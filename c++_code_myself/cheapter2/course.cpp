#include<iostream>
#include<string>
using namespace std;

int main()
{
	std::cout << "please enter your first name";
	std::string name;
	std::cin >> name;
	const std::string greeting = "hello,"+ name + "!";//变量赋值,+ 字符串连接
    const int pad = 2;
    const int raws = pad*2 + 3;
    
    std::string::size_type cols = greeting.size() + pad*2 + 2; 
    std::cout << std::endl;
    int r = 0;
    while(r!=raws ){
            std::string::size_type c = 0;
             while (c!=cols )
            {
                 if(r == 0 || r == raws -1 || c==0 || c == cols -1) {
                std::cout << "*";
                ++c;
                     }
                 else {
                        if (r == pad + 1 && c == pad +1 )
                        {
                                std::cout << greeting;
                                c +=greeting.size();
                        }
                        else
                        {
                                std::cout << " ";
                                ++c;
                        }
                 }

            }
	
          cout << endl;

            ++r;
    }
    // 使用局部变量保存字符串长度,size_type 库为特殊用途而定义的类型
  	return 0;
}
