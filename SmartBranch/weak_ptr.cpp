#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sp = std::make_shared<int>(10);
    std::weak_ptr<int> wp = sp; // Create a weak_ptr from shared_ptr

    if (auto spt = wp.lock()) { // Check if the weak_ptr can be converted to shared_ptr
        std::cout << "Value: " << *spt << std::endl;
    } else {
        std::cout << "Weak pointer is expired" << std::endl;
    }

    return 0;
}
