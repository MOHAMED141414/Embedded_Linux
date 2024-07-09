#include <iostream>
#include <iomanip> // for std::setw

int main() {
    std::cout << "ASCII Table for 0 to 255:" << std::endl;
    std::cout << "_________________________" << std::endl;
    std::cout << "Decimal\t\tCharacter" << std::endl;
    std::cout << "_______\t\t_________" << std::endl;

    // Print ASCII table from 0 to 255
    for (int i = 0; i <= 255; ++i) {
        // Print decimal value and corresponding character
        std::cout<<" | " <<std:: setw(3) << i << "\t\t" << char(i)<<std:: setw(3)<<"|"<<std::endl;
    }

    return 0;
}
