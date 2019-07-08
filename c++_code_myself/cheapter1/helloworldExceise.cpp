/*
#include<iostream>
#include<string>

int main()
{
	//下面这句会报错:
	//helloworldExceise.cpp:6:30: error: ‘hello’ was not declared in this scope

	//const std::string message = hello + "world" + "!";

}
*/

/*
#include<iostream>
#include<string>

int main()
{
	{
 	//两个大括号的部分各自运行	
	const std::string s = "abc string";
	std::cout << s << std::endl;
	//return 0;
	}
	{
	const std::string s = "another string";
	std::cout << s << std::endl;
	
	}
	return 0;

}
*/
/* 
#include<iostream>
#include<string>

int main()
{
	{
	//两个大括号内的内容还是各自运行,结果
	//abc string
	//def string

	const std::string s = "abc string";
	std::cout << s << std::endl;
		{
			const std::string s = "defg string";
			std::cout << s << std::endl;
		}; 	//此处添加或者不添加;结果相同
	}
	return 0;

}
*/
/*
// 1-5
#include<iostream>
#include<string>

int main()
{

	{
		std::string s = "a string";
		{
			std::string x = s + ", reallly";
			std::cout << s << std::endl;
			
		}
		std::cout << x << std::endl;	//x is out of its scope here

	}
return 0;

// 运行结果 helloworldExceise.cpp: In function ‘int main()’:
//helloworldExceise.cpp:73:16: error: ‘x’ was not declared in this scope
//   std::cout << x << std::endl; //x is out of its scope here
}
*/ 

// 1-6
#include<iostream>
#include<string>
 
int main()
{
	std::cout << "what is your name?";
	std::string name;
	std::cin >> name;
	std::cout << "hello," << name << std::endl << "and whar is yours?";
	std::cin >> name;
	std::cout << "hello" << name << "; nice too meet you too!" << std::endl;
	return 0;

}
