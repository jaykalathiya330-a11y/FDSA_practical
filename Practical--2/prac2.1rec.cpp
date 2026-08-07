#include<iostream>
using namespace std;

int recursiveSearch(int arr[], int target, int n) {
    if (n < 0) {
        return -1;
    }
    if (arr[n] == target) {
        return n; 
    }
    return recursiveSearch(arr, target, n - 1); 
}

int main() {
    int numPlate[10] = {1212, 2002, 0456, 6789, 5679, 4222, 7870, 2354, 6568, 3215};
    int target = 6789;
    int n = 9;

    int result = recursiveSearch(numPlate, target, n);
    if (result != -1) {
        cout << "Number plate found at index " << result << ": " << numPlate[result] << endl;
    } else {
        cout << "Number plate not found.";
    }

    return 0;
}