/* A memory leak occurs when dynamically allocated memory is not deallocated properly, leading to wasted memory and potential performance issues.

Common Causes of Memory Leaks:
Forgetting to call delete or delete[] for dynamically allocated memory.
Losing all references to dynamically allocated memory without deallocating it.
How to Avoid Memory Leaks:
Use Smart Pointers: Prefer std::unique_ptr and std::shared_ptr over raw pointers to manage memory automatically.
Ensure Proper Deallocation: Always pair new with delete and new[] with delete[].
Avoid Manual Memory Management: Use standard library containers and smart pointers to manage memory.
Use Memory Leak Detection Tools: Tools like Valgrind can help detect memory leaks in your application.

*/
#include <iostream>

void allocateMemory() {
    int* ptr = new int(10);
    // Memory leak: no delete
}

int main() {
    allocateMemory();
    // Memory leak because 'ptr' is not deallocated
    return 0;
}

#include <memory>

void allocateMemory() {
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    // No need to manually delete; memory is managed by unique_ptr
}

int main() {
    allocateMemory();
    return 0;
}
