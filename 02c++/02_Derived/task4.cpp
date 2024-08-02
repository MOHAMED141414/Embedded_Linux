// merge two arrays together
#include <bits/stdc++.h>
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int x=sizeof(arr2)/sizeof(arr2[0]);
    int merge_arr[n+x];
    for(int i=0;i<n;i++)
    {
        merge_arr[i]=arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        merge_arr[n+i]=arr2[i];
    }
    for(int i=0;i<n+x;i++)
    {
        std::cout<<merge_arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}