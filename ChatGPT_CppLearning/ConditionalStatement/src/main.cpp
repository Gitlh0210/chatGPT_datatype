#include <iostream>
/*
	if		：用于判断数值的正负或零。
	switch	：用于根据数值执行不同的代码块，适用于离散值的判断。
*/
int main(){
	int number;
	std::cout << "请输入一个整数: ";
	std::cin >> number;

	//使用if-else
	if (number > 0) 
	{
		std::cout << "您输入的数是正数。" << std::endl;
	}
	else if (number < 0) 
	{
		std::cout << "您输入的数是负数。" << std::endl;
	}
	else {
		std::cout << "您输入的数是零。" << std::endl;
	}

	//使用switch
	switch (number)
	{
		case 0:
			std::cout << "数字是零。" << std::endl;
			break;
		case 1:
			std::cout << "数字是一。" << std::endl;
			break;
		default:
			std::cout << "数字不是零也不是一。" << std::endl;
	}

	return 0;
}