#include<iostream>
#include<string>
 
int main()
{
	std::cout << "please enter your first name";
	std::string name;	//定义名字为name的变量
	std::cin >> name;
	std::cout << "hello," << name << "!" << std::endl;
	return 0;
}
