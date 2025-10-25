#include <iostream>
using namespace std;

// Function to heapify a subtree rooted at index i
// n is the size of the heap
void heapify(int arr[], int n, int i) {
    int largest = i;       // Initialize largest as root

    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]); // Swap root and largest
        heapify(arr, n, largest);// Recursively heapify the affected subtree
    }


    // Function to perform Heap Sort
void heapSort(int arr[], int n) {
    // Build a max-heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements one by one from the heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root (largest) to the end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

}

// Main function
int main() {
    // Define and initialize the array to be sorted
    int arr[] = {12, 11, 13, 5, 6, 7};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original unsorted array
    cout << "Original array: ";
    printArray(arr, n);

    // Call the heapSort function to sort the array
    heapSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;

}