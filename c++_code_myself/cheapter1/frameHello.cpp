#include<iostream>
#include<string>
using namespace std;

int main()
{
	std::cout << "please enter your first name";
	std::string name;
	std::cin >> name;
	const std::string greeting = "hello,"+ name + "!";//变量赋值,+ 字符串连接
	//输出第二行和第四行
	//常量变量必须在定义时进行初始化	
	//' '字符直接量,相对于字符串直接量,总是用单引号括起
	//字符串直接量总是用双引号括起
	const std::string space(greeting.size(),' ');
	const std::string second = "*" + space + "*";
	//输出第一行和第五行
	const std::string first(second.size(),'*');

	//输出所有内容
	std::cout << std::endl;
	std::cout <<first << std::endl;
	std::cout <<second <<std::endl;
	std::cout << "*" << greeting << "*" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	return 0;

	

}
//知识点,定义变量z,初始化为n个字符c的字符串
//std::string z(n,c);
