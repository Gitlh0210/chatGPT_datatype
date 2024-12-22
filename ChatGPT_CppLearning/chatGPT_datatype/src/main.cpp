#include <iostream>
#include <string>
/*
	常见数据类型:
		int		整数
		char	字符
		double	双精度浮点数
		bool	布尔代数（true false）
		string	字符串（需要包含<string>头文件）

		std::cout 标准输出流，用于在控制台打印信息。
		<< 流插入运算符，将右侧的数据插入到输出流中。
*/
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