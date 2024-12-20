
//#include <iostream>
//#include <string>
//
//int	main()
//{
//	int age = 25;
//	double height = 175.5;
//	double weight = 64.5;
//	char grade = 'A';
//	bool isStudent = true;
//	std::string name = "张三";
//
//	std::cout << "姓名：" << name << std::endl;
//	std::cout << "年龄：" << age << std::endl;
//	std::cout << "身高：" << height << std::endl;
//	std::cout << "体重：" << weight << std::endl;
//	std::cout << "成绩：" << grade << std::endl;
//	std::cout << "是否为学生：" << (isStudent ? "是"："否") << std::endl;
//
//	return 0;
//}
#include <iostream>
#include <string>

int main() {
	int age = 25;
	double height = 175.5;
	char grade = 'A';
	bool isStudent = true;
	std::string name = "张三";

	std::cout << "姓名: " << name << std::endl;
	std::cout << "年龄: " << age << " 岁" << std::endl;
	std::cout << "身高: " << height << " cm" << std::endl;
	std::cout << "成绩: " << grade << std::endl;
	std::cout << "是否为学生: " << (isStudent ? "是" : "否") << std::endl;

	return 0;
}
