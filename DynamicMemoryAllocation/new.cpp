/*

Dynamic memory allocation allows us to allocate and deallocate memory at runtime using the new and delete operators.

Using new
The new operator allocates memory on the heap and returns a pointer to the allocated memory.


*/

#include <iostream>

int main() {
    // Allocate memory for an integer
    int* p = new int;
    *p = 10; // Assign a value to the allocated memory

    std::cout << "Value: " << *p << std::endl;

    // Deallocate memory
    delete p;

    return 0;
}
