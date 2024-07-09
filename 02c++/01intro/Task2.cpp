//-RIGHT angle triangle
#include <iostream>
int main()
{ 
    int a=0, b=0, c=0;
    std::cout<<"Please Enter the first side:";
    std::cin>>a;
    std::cout<<"Please Enter the second side:";
    std::cin>>b;
    std::cout<<"Please Enter the third side:";
    std::cin>>c;
    if(a>b) std::swap(a,b);
    if(b>c) std::swap(b,c);
    if (a>b) std::swap(a,b);
    bool isright=(a*a + b*b == c*c);
    if(isright){
        std::cout<<"Right angle triangle"<<std::endl;
    }
    else {
    std::cout<<"No Right angle triangle"<<std::endl;
    }
    



    return 0;
}