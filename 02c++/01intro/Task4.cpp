//multiplication table
#include <iostream>


int main() {
    int num;

    std::cout << "Enter the size of the multiplication table: ";
    std::cin >> num;
    std::cout << "Multiplication Table up to " << num << ":" <<std:: endl;
    std::cout << "   ";
    for (int i = 1; i <= num; i++) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    for (int i = 1; i <= num; i++) {
        std::cout << i << ": ";
        for (int j = 1; j <= num; j++) {
            std::cout << i * j << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
