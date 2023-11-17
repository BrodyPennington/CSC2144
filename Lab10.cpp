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

int findLargestElement(int array[], int nLarge) {
    if (nLarge == 1)
        return array[nLarge - 1];

    int pMax = findLargestElement(array, nLarge - 1);

    if (pMax > array[nLarge - 1])
        return pMax;
    else
        return array[nLarge - 1];
}

int findSmallestElement(int array[], int nSmall) {
    if (nSmall == 1)
        return array[0];
    return std::min(array[nSmall-1], findSmallestElement(array, nSmall-1));
}

void printElement(int array[], int numPrintSize) {
    static int i;
    if (i == numPrintSize) {
        i = 0;
        std::cout << std::endl;
        return;
    }

    std::cout << array[i] << " ";
    i++;

    printElement(array, numPrintSize);

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

    std::cout << "Sum of array elements: " << sumElements(array, 0, numElements) << std::endl;
    std::cout << "Largest element in the array: " << findLargestElement(array, numElements) << std::endl;
    std::cout << "Smallest element in the array: " << findSmallestElement(array, numElements) << std::endl;
    std::cout << "Elements in array: ";
    printElement(array, numElements);


}
