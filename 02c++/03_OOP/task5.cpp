#include <bits/stdc++.h>
/*fill array from 10 to 10000 sequentially*/
void fill_array(int arr[],int start ,int end,int value)
{
    if(start > end)
    {
        return;
    }
    arr[start]=value;
    fill_array(arr,start+1,end,value+1);
}





int main()
{
    const int size=9991;
    int arr[size];
    fill_array(arr ,0, size-1, 10);
    
    return 0;
}