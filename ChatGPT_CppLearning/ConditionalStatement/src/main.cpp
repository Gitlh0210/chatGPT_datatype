#include <iostream>
/*
	if		�������ж���ֵ���������㡣
	switch	�����ڸ�����ִֵ�в�ͬ�Ĵ���飬��������ɢֵ���жϡ�
*/
int main(){
	int number;
	std::cout << "������һ������: ";
	std::cin >> number;

	//ʹ��if-else
	if (number > 0) 
	{
		std::cout << "�����������������" << std::endl;
	}
	else if (number < 0) 
	{
		std::cout << "����������Ǹ�����" << std::endl;
	}
	else {
		std::cout << "������������㡣" << std::endl;
	}

	//ʹ��switch
	switch (number)
	{
		case 0:
			std::cout << "�������㡣" << std::endl;
			break;
		case 1:
			std::cout << "������һ��" << std::endl;
			break;
		default:
			std::cout << "���ֲ�����Ҳ����һ��" << std::endl;
	}

	return 0;
}