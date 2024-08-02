// Sort with Lambda: Use lambda functions to sort an array of integers in ascending and descending order.3
#include<bits/stdc++.h>
int main()
{
    std::vector<int>v{5,97,21,13,45,7};
    std::sort(v.begin(),v.end(),[](int a,int b){return a<b;});
    std::cout << "Ascending order: ";
    for(int n : v) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    std::sort(v.begin(),v.end(),[](int a,int b){return a >b;});
    std::cout << "Descending order: ";
    for(int n : v) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}