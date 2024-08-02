// create a function to ﬁnd the maximum number of array
#include <bits/stdc++.h>
int  max_arr(int arr[],int size_)
{
    std::sort(arr,arr+size_);
    return arr[size_-1];
}
int main()
{
 int arr[]={2,5,6,37,85,22};
 int n=sizeof(arr)/sizeof(arr[0]);
 int result=max_arr(arr, n);
 std::cout<<result<<std::endl;

    return 0;
}
 


