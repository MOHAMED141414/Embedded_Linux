// ﬁnd the even and odd numbers in the array
#include <bits/stdc++.h>
int main()
{
    int arr[]={2,5,6,37,85,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            std::cout<<"The number is even:"<<arr[i]<<std::endl;
        }else
        {
            std::cout<<"The number is odd:"<<arr[i]<<std::endl;
        }
    }
    return 0;
}