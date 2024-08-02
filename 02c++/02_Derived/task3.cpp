// delete number in array
#include <bits/stdc++.h>
int main()
{
    std::vector<int>v{1,2,3,4,5,6,7,8,9};
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<" ";
    }
   std::cout<<std::endl;
    return 0;
}