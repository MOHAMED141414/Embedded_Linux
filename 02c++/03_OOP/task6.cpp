#include <bits/stdc++.h>
#include <numeric>
/*calculate accumulate of array*/

// int accumulateArray(int arr[], int size) {
//     if (size == 0) {
//         return 0;
//     }
//     return arr[size - 1] + accumulateArray(arr, size - 1);
// }

int main() {
    int arr[] = {2,5,8,4,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = std::accumulate(arr,arr+size,0);
    std::cout << "The accumulate sum is: " << sum << std::endl;

    return 0;
}