#include <iostream>
/*
	ѭ�����
	for
	while
	do while
*/

int main()
{
	//forѭ��
	std::cout << "forѭ����ӡ1-5��	" << std::endl;
	for (int i = 1; i < 6; i++)
	{
		std::cout << i <<" ";
	}
	std::cout << std::endl;
	//whileѭ��
	std::cout << "whileѭ����ӡ5-1��	" << std::endl;
	int j = 5;
	while (j > 0)
	{
		std::cout << j << " ";
		j--;
	}
	std::cout << std::endl;
	//do while
	std::cout << "do while ����ѭ��һ�Σ�" << std::endl;
	int k = 0;
	do
	{
		std::cout << "k= " << k << std::endl;
		k++;
	} while (k < 1);

	return 0;
}