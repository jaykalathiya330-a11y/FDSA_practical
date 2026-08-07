#include<iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int target, int low, int high) {
    if (low > high) {
        return -1; 
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, target, mid + 1, high); 
    } else {
        return recursiveBinarySearch(arr, target, low, mid - 1); 
    }
}

int main() {
    int arr[6] = {101, 102, 103, 104, 105, 106};
    int n = 6;
    int target = 102;

    int result = recursiveBinarySearch(arr, target, 0, n - 1);
    if (result != -1) {
        cout << "Found at index: " << result << ": " << arr[result] << endl;
    } else {
        cout << "Not found." << endl;
    }

    return 0;
}