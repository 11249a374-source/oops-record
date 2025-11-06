#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

// Function to print the array with formatted output
void printArray(const std::vector<int>& arr, const std::string& title) {
    std::cout << "\n--- " << title << " ---" << std::endl;
    std::cout << std::left << std::setw(15) << "Index" << "Value" << std::endl;
    std::cout << std::setfill('-') << std::setw(25) << "" << std::endl;
    std::cout << std::setfill(' '); // Reset fill character

    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << std::left << std::setw(15) << i << arr[i] << std::endl;
    }
}

// Bubble sort algorithm
void bubbleSort(std::vector<int>& arr) {
    bool swapped;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main() {
    // Initial unsorted data
    std::vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    
    // Demonstrate before formatting
    printArray(numbers, "Array Before Sorting");

    // Execute the sorting algorithm
    bubbleSort(numbers);

    // Demonstrate after formatting
    printArray(numbers, "Array After Sorting");

    return 0;
}
