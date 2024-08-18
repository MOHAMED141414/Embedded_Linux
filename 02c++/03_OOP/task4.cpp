#include <bits/stdc++.h>

int &f() {
    static int x = 0; 
    std::cout<< x << std::endl;
    return x;
}

int main() {

    f() = 10; 
    f();      
    f() = 0;  
    f();      

    return 0;
}