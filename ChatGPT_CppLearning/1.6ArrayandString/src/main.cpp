#include <iostream>
#include <string>
/*
	����	:���ڴ洢��ͬ���͵Ķ��Ԫ��
	�ַ���	:���ڴ洢�ַ����С�
*/
//void array(int number[5]=1) {
//	std::cout << "������������������У�" << number << std::endl;
//}
//
//void greet(std::string greeting) {
//	std::cout << greeting << std::endl;
//}
//
//int main() {
//	array();
//	greet("Hi,Albert.");
//
//	return 0;
//}

const int SIZE = 5;

void inputArray(int arr[], int size);
void displayArray(int arr[], int size);
void modifyArray(int arr[], int size);

int main()
{
	int number[SIZE] = { 0 };
	int choice;

	do {
		std::cout << "\n----�������˵�----\n";
		std::cout << "1.��������Ԫ��\n";
		std::cout << "2.��ʾ����Ԫ��\n";
		std::cout << "3.�޸�����Ԫ��\n";
		std::cout << "4.�˳�\n";
		std::cout << "��ѡ�������1-4��:\n";
		std::cin >> choice;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "������Ч,������1-4֮���������" << std::endl;
			continue;
		}

		switch (choice)
		{
		case 1:
			std::cout << "�����룺" << SIZE << "������:" << std::endl;
			for (int i = 0; i < SIZE; ++i) {
				std::cout << "Ԫ��" << i + 1 << ":";

				std::cin >> number[i];

				if (std::cin.fail()) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "������Ч,������������" << std::endl;
					--i;
				}
			}

			std::cout << "����Ԫ��������ɡ�" << std::endl;
			break;

		case 2:
			std::cout << "��ǰ����Ԫ�أ�" << std::endl;
			for (int i = 0; i < SIZE; ++i) {
				std::cout << "Ԫ��" << i + 1 << ":" << number[i] << std::endl;
			}
			break;

		case 3: 
			{
			int index, newValue;
			std::cout << "������Ҫ�޸ĵ�Ԫ�ر��(1-" << SIZE << "):";
			std::cin >> index;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "������Ч��������������";
				break;
			}

			if (index<1 || index>SIZE) {
				std::cout << "��Ч��Ԫ�ر�š�" << std::endl;
				break;
			}
			std::cout << "�������µ�ֵ��";
			std::cin >> newValue;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "������Ч��������������";
				break;
			}

			number[index - 1] = newValue;
			std::cout << "Ԫ��" << index << "�ѱ�����Ϊ " << newValue << "��" << std::endl;	
		}
		break;

		case 4:
			std::cout << "�˳�����" << std::endl;
			break;

		default:
			std::cout << "��Ч��ѡ��,������ѡ��" << std::endl;
		}
	} while (choice != 4);
}

/**
 * @brief ��������Ԫ��
 *
 * @param arr ����
 * @param size �����С
 */
void inputArray(int arr[], int size) {
	std::cout << "������ " << size << " ��������" << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << "Ԫ�� " << i + 1 << ": ";
		std::cin >> arr[i];
	}
	std::cout << "����Ԫ����������ɡ�" << std::endl;
}

/**
 * @brief ��ʾ����Ԫ��
 *
 * @param arr ����
 * @param size �����С
 */
void displayArray(const int arr[], int size) {
	std::cout << "��ǰ����Ԫ�أ�" << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << "Ԫ�� " << i + 1 << ": " << arr[i] << std::endl;
	}
}

/**
 * @brief �޸������е�ĳ��Ԫ��
 *
 * @param arr ����
 * @param size �����С
 */
void modifyArray(int arr[], int size) {
	int index, newValue;

	std::cout << "������Ҫ�޸ĵ�Ԫ�ر�ţ�1-" << size << "��: ";
	std::cin >> index;

	// �������������Ƿ���Ч
	if (index < 1 || index > size) {
		std::cout << "��Ч��Ԫ�ر�š�" << std::endl;
		return;
	}

	std::cout << "�������µ�ֵ: ";
	std::cin >> newValue;

	arr[index - 1] = newValue; // �޸�����Ԫ��

	std::cout << "Ԫ�� " << index << " �ѱ�����Ϊ " << newValue << "��" << std::endl;
}