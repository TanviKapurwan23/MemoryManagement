#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> p1(new int(10)); // Create a shared_ptr
    {
        std::shared_ptr<int> p2 = p1; // p1 and p2 share ownership
        std::cout << "Value: " << *p2 << std::endl;
    } // p2 goes out of scope, but p1 still owns the object

    std::cout << "Value from p1: " << *p1 << std::endl;

    return 0;
}
