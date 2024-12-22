#include <iostream>
/*
    常见运算符：
        算术运算符：+  -  *  /  %
        关系      ：==  !=  >  <  >=  <=
        逻辑      ：&&  ||  ！


*/
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
