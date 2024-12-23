#include <iostream>
#include <string>
/*
	数组	:用于存储相同类型的多个元素
	字符串	:用于存储字符序列。
*/
//void array(int number[5]=1) {
//	std::cout << "输入五个整数到数组中：" << number << std::endl;
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
		std::cout << "\n----数组管理菜单----\n";
		std::cout << "1.输入数组元素\n";
		std::cout << "2.显示数组元素\n";
		std::cout << "3.修改数组元素\n";
		std::cout << "4.退出\n";
		std::cout << "请选择操作（1-4）:\n";
		std::cin >> choice;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "输入无效,请输入1-4之间的整数。" << std::endl;
			continue;
		}

		switch (choice)
		{
		case 1:
			std::cout << "请输入：" << SIZE << "个整数:" << std::endl;
			for (int i = 0; i < SIZE; ++i) {
				std::cout << "元素" << i + 1 << ":";

				std::cin >> number[i];

				if (std::cin.fail()) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "输入无效,请输入整数。" << std::endl;
					--i;
				}
			}

			std::cout << "数组元素输入完成。" << std::endl;
			break;

		case 2:
			std::cout << "当前数组元素：" << std::endl;
			for (int i = 0; i < SIZE; ++i) {
				std::cout << "元素" << i + 1 << ":" << number[i] << std::endl;
			}
			break;

		case 3: 
			{
			int index, newValue;
			std::cout << "请输入要修改的元素编号(1-" << SIZE << "):";
			std::cin >> index;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "输入无效，请输入整数。";
				break;
			}

			if (index<1 || index>SIZE) {
				std::cout << "无效的元素编号。" << std::endl;
				break;
			}
			std::cout << "请输入新的值：";
			std::cin >> newValue;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "输入无效，请输入整数。";
				break;
			}

			number[index - 1] = newValue;
			std::cout << "元素" << index << "已被更新为 " << newValue << "。" << std::endl;	
		}
		break;

		case 4:
			std::cout << "退出程序。" << std::endl;
			break;

		default:
			std::cout << "无效的选项,请重新选择。" << std::endl;
		}
	} while (choice != 4);
}

/**
 * @brief 输入数组元素
 *
 * @param arr 数组
 * @param size 数组大小
 */
void inputArray(int arr[], int size) {
	std::cout << "请输入 " << size << " 个整数：" << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << "元素 " << i + 1 << ": ";
		std::cin >> arr[i];
	}
	std::cout << "数组元素已输入完成。" << std::endl;
}

/**
 * @brief 显示数组元素
 *
 * @param arr 数组
 * @param size 数组大小
 */
void displayArray(const int arr[], int size) {
	std::cout << "当前数组元素：" << std::endl;
	for (int i = 0; i < size; ++i) {
		std::cout << "元素 " << i + 1 << ": " << arr[i] << std::endl;
	}
}

/**
 * @brief 修改数组中的某个元素
 *
 * @param arr 数组
 * @param size 数组大小
 */
void modifyArray(int arr[], int size) {
	int index, newValue;

	std::cout << "请输入要修改的元素编号（1-" << size << "）: ";
	std::cin >> index;

	// 检查输入的索引是否有效
	if (index < 1 || index > size) {
		std::cout << "无效的元素编号。" << std::endl;
		return;
	}

	std::cout << "请输入新的值: ";
	std::cin >> newValue;

	arr[index - 1] = newValue; // 修改数组元素

	std::cout << "元素 " << index << " 已被更新为 " << newValue << "。" << std::endl;
}