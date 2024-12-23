#include <iostream>
/*
	函数：是实现代码复用的重要手段，可以将特定功能封装起来。
*/

// 函数声明
int add(int a, int b);
void greet(std::string name);

int main() {
	int sum = add(5, 7);
	std::cout << "5 + 7 = " << sum << std::endl;

	greet("李四");

	return 0;
}

// 函数定义
int add(int a, int b) {
	return a + b;
}

void greet(std::string name) {
	std::cout << "你好, " << name << "!" << std::endl;
}
