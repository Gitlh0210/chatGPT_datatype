#include <iostream>
/*
	循环语句
	for
	while
	do while
*/

int main()
{
	//for循环
	std::cout << "for循环打印1-5：	" << std::endl;
	for (int i = 1; i < 6; i++)
	{
		std::cout << i <<" ";
	}
	std::cout << std::endl;
	//while循环
	std::cout << "while循环打印5-1：	" << std::endl;
	int j = 5;
	while (j > 0)
	{
		std::cout << j << " ";
		j--;
	}
	std::cout << std::endl;
	//do while
	std::cout << "do while 至少循环一次：" << std::endl;
	int k = 0;
	do
	{
		std::cout << "k= " << k << std::endl;
		k++;
	} while (k < 1);

	return 0;
}