#include <iostream>
/*
	��������ʵ�ִ��븴�õ���Ҫ�ֶΣ����Խ��ض����ܷ�װ������
*/

// ��������
int add(int a, int b);
void greet(std::string name);

int main() {
	int sum = add(5, 7);
	std::cout << "5 + 7 = " << sum << std::endl;

	greet("����");

	return 0;
}

// ��������
int add(int a, int b) {
	return a + b;
}

void greet(std::string name) {
	std::cout << "���, " << name << "!" << std::endl;
}
