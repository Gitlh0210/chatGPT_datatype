#include <iostream>
#include <string>

int	main()
{
	int age = 25;
	double height = 175.5;
	double weight = 64.5;
	char grade = 'A';
	bool isStudent = true;
	std::string name = "张三";

	std::cout << "姓名：" << name << std::endl;
	std::cout << "年龄：" << age << std::endl;
	std::cout << "身高：" << height << " cm" << std::endl;
	std::cout << "体重：" << weight << " kg" << std::endl;
	std::cout << "成绩：" << grade << std::endl;
	std::cout << "是否为学生：" << (isStudent ? "是":"否") << std::endl;

	return 0;
}