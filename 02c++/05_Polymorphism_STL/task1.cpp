#include <bits/stdc++.h>
// Testing STL Containers
int main() {
    
    // Vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    std::cout << "Vector: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << std::endl;

    // List
    std::list<int> lst = {10, 20, 30};
    lst.push_back(40);
    std::cout << "List: ";
    for (int l : lst) std::cout << l << " ";
    std::cout << std::endl;

    // Map
    std::map<int, std::string> mp = {{1, "one"}, {2, "two"}, {3, "three"}};
    mp[4] = "four";
    std::cout << "Map: ";
    for (const auto& p : mp) std::cout << "{" << p.first << ", " << p.second << "} ";
    std::cout << std::endl;

    // Set
    std::set<int> st = {5, 10, 15, 20};
    st.insert(25);
    std::cout << "Set: ";
    for (int s : st) std::cout << s << " ";
    std::cout << std::endl;

    
    
    // Sorting
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    std::cout << "Sorted vector (descending): ";
    for (int v : vec) std::cout << v << " ";
    std::cout << std::endl;

    // Finding an element
    auto it = std::find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        std::cout << "Element 3 found in vector at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Element 3 not found in vector" << std::endl;
    }

    // Accumulate
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << "Sum of vector elements: " << sum << std::endl;

    

    return 0;
}
