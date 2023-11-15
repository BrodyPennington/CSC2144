// Name: Brody Pennington
// Lab: Lab 10
// Due Date: 9/13/2023
// Filename: Lab10.cpp
// Description: Use 4 recursive functions to find the sum of array, largest element of array, smallest element of array, and print the array.
#include <iostream>

int sumElements(int array[], int begin, int numElements) {

    if ( begin >= numElements) {
        return 0;
    }

    return (array[begin] + sumElements(array, begin + 1, numElements));
}

int findLargestElement(int array[], int n) {
    if (n == 1)
        return array[n - 1];

    int pMax = findLargestElement(array, n - 1);

    if (pMax > array[n - 1])
        return pMax;
    else
        return array[n - 1];
}


int main() {
    int numElements;

    std::cout << "Size of the array: ";
    std::cin >> numElements;
    int array[numElements];

    std::cout << "Array Elements: " << std::endl;
    for (int i = 0; i < numElements; i++) {
        std::cin >> array[i];
    }

    int sum = sumElements(array, 0, numElements);

    std::cout << "Sum of array elements: " << sum << std::endl;

    std::cout << "Largest element in the array: " << findLargestElement(array, numElements);


}
