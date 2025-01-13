// The delete operator deallocates memory previously allocated with new.

#include <iostream>

int main() {
    // Allocate memory for an array of integers
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Display array values
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}
