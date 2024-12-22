#include <iostream>

int main() {
    int a = 10, b = 3;

    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl;
    std::cout << "a % b = " << (a % b) << std::endl;

    if (a > b && b != 0) {
        std::cout << "a 大于 b 并且 b 不等于 0" << std::endl;
    }

    return 0;
}
