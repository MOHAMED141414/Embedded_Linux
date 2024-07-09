//change from decimal to binary and vice versa
#include<iostream>
#include <stack>
int main()
{
    //first in last out 
    std::stack <int>binary;
    int num=0,decnum=0;
    std::string binarystr;
    std::cout<<"Enter a decimal number:";
    std::cin>>num;
    if(num==0){
        binary.push(0);
    }else
    {
        while (num>0) {
            binary.push(num%2);
            num/=2;
        }
    }
    std::cout<<"Binary representation:";
    while (!binary.empty()) {
        std::cout<<binary.top();
        binary.pop();
    }
    std::cout<<std::endl;
    std::cout<<"Enter a binary number:";
    std::cin>>binarystr;
    int len=binarystr.length();
    for(int i=0;i<len;i++)
    {
        if (binarystr[i] == '1') {
            decnum += (1 << (len - 1 - i)); 
        }
    }
    std::cout<<"Decimal representation"<<decnum<<std::endl;
    return 0;
}