#include <bits/stdc++.h>
class String
{
private:
    char *str;
    unsigned int  length;
public:
    //Default constructor
    String() :str(nullptr),length(0){}
    //param constructor
    String(const char* data)
    {
        length =std::strlen(data);
        str= new char[length+1];
        std::strcpy(str,data);
    }
    //copy constructor
    String(const String& data)
    {
        length = data.length;
        str= new char[length+1];
        std::strcpy(str,data.str);
    }
    //move constructor
    String( String&& data)
    {
        str=data.str;
        length=data.length;
        data.str=nullptr;
        data.length=0;
    }
    ~String(){delete [] str;}

    // Assignment operator
    String& operator=(const String& other) {
        if (this == &other) return *this;

        delete[] str;

        length = other.length;
        str = new char[length + 1];
        std::strcpy(str, other.str);

        return *this;
    }

    // Move assignment operator
    String& operator=(String&& other) noexcept {
        if (this == &other) return *this;

        delete[] str;

        str = other.str;
        length = other.length;

        other.str = nullptr;
        other.length = 0;

        return *this;
    }
    String operator+(const String& other) const {
        unsigned int  newLength = length + other.length;
        char* newData = new char[newLength + 1];
        std::strcpy(newData, str);
        std::strcat(newData, other.str);

        String newString;
        newString.str = newData;
        newString.length = newLength;

        return newString;
    }


    void print() const {
        if (str) {
            std::cout << str << std::endl;
        }
    }
};

int main()
{
   String s1("HELLO ");
   String s2("WORLD");
   String s3 =s1+s2;
   s3.print();
    return 0;
}