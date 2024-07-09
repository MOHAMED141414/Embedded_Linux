//summation the digits of integer entered by user
#include<iostream>
int main()
{
    int num=0,sum=0;
    std::cout<<"Enter an integer number:";
    std::cin>>num;
    while (num!=0)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    std::cout<<"the output of summation is :"<<sum<<std::endl;
    return 0;
}