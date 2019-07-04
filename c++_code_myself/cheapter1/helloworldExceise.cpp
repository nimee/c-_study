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

