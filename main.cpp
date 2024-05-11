#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> mySet = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::erase_if(mySet, [](int x) { return x % 2 == 0; });

    std::cout << "Remaining elements in the set:" << std::endl;
    for (const auto& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
