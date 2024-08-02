// create a function to search to the number in the array which number is taken from user
#include <bits/stdc++.h>
int search_num(int arr[],int size_,int num)
{
    int i, y=0;
    for(i=0;i<size_;i++)
    {
        if(arr[i] == num)
        {
            y=arr[i];
        }
    
        
    }
    return y;
}
int main()
{
    int num=0;
    std::cout<<"Please Enter the number:";
    std::cin>>num;
    int arr[]={2,5,6,37,85,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=search_num(arr,n, num);
    if(result == 0)
    {
        std::cout<<"The num not found in this array"<<std::endl;
    }
    else
    {
        std::cout<<"The number is: "<<result<<std::endl;
    }
    

    return 0;
}