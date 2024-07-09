//maximum number between three values
#include <iostream>

int main()
{
    int a=0, b=0, c=0;
    std::cout<<"Please Enter the first num:";
    std::cin>>a;
    std::cout<<"Please Enter the second num:";
    std::cin>>b;
    std::cout<<"Please Enter the third num:";
    std::cin>>c;

    int max = a;
    if (b > max)
    {
        max = b;
    }   
    if (c > max)
    {
        max = c;
    }

    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
    return 0;
}