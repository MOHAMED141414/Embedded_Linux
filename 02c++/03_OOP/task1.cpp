#include <bits/stdc++.h>
#include <cctype>
/*
-check if the character is digit ?
-check if all the array is even ?
-check if there is any value of array is even ?
*/
class Check
{
public:

    int is_digit(char c)
    {
       return std::isdigit(static_cast<unsigned char>(c));
    }


    int arr_is_even(int arr[],int size)
    {
        for (int i = 0; i < size; i++)
        {
            if(arr[i] % 2 ==1 )
            {
                return 0;
            }
                
        }
        return 1;
    }

    int value_of_arr_is_even(int arr[],int size)
    {
        for (int i = 0; i < size; i++)
        {
            if(arr[i] % 2 == 0 )
            {
                return 1;
            }
                
        }
        return 0;
    }
};

int main()
{   
    Check check;
    char c = '5';
    std::cout<<"is "<< c << " a digit? "<< (check.is_digit(c) ? "yes":"no")<<std::endl;
    int arr[]={1,2,3,4};
    std::cout<<"all elements even? "<<(check.arr_is_even(arr,4) ? "yes":"no")<<std::endl;
    std::cout<<"any even element? "<<(check.value_of_arr_is_even(arr,4)?"yes":"no")<<std::endl;
   
    return 0;
}