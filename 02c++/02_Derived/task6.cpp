//Simple Lambda: Write a lambda function to calculate the square of a given number.
#include<bits/stdc++.h>
int main()
{
    int x=0;
    std::cout<<"Please Enter the num:";
    std::cin>>x;
    [&x](){std::cout<<x*x<<std::endl;}();
    return 0;
}