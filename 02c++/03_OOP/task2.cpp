#include <bits/stdc++.h>

/*write string class which has
Members { length - string}*/
class String {
private:
    int length;  
    char* str;   

public:
    
    String() : length(0), str(nullptr) {}

    
    String(const char* inputStr) {
        length = std::strlen(inputStr);
        str = new char[length + 1];  
        std::strcpy(str, inputStr);  
    }

    
    ~String() {
        delete[] str;  
    }
    void setString(const char* inputStr) {
        delete[] str;  

        length = std::strlen(inputStr);
        str = new char[length + 1];  
        std::strcpy(str, inputStr);  
    }

    const char* getString() const {
        return str;
    }

    int getLength() const {
        return length;
    }

    void display() const {
        if (str != nullptr) {
            std::cout << "String: " << str << " (Length: " << length << ")" << std::endl;
        } else {
            std::cout << "String is empty." << std::endl;
        }
    }
};

int main()
{
    String str("Mohamed");
    str.display();

    return 0;
}