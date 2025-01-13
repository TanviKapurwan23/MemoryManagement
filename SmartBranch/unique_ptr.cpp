#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> p(new int(10)); // Create a unique_ptr
    std::cout << "Value: " << *p << std::endl;

    // No need to manually delete; memory is freed automatically when p goes out of scope

    return 0;
}
