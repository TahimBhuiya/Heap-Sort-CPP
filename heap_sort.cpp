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

    
    


   
    
        
          






}