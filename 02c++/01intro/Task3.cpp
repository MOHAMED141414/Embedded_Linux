//decide the letter is vowel or not
#include <iostream>
int main()
{
    char c;
    std::cout<<"Enter a char:";
    std::cin>>c;
    c=tolower(c);
    if(c=='a' || c=='i' || c=='e' || c=='o' || c=='u')
    {
        std::cout<<"is a vowel"<<std::endl;
    }
    else {
    std::cout<<"is not a vowel"<<std::endl;
    }
    return 0;
}