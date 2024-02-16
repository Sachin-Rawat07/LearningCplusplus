#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 5, 0, 3, 4, 2};
    int len = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i < len - 1; i++) {  // Adjust loop condition
        if (arr[i] == 0 && arr[i + 1] != 0) {
            swap(arr[i], arr[i + 1]);
            i = -1;  // Reset i to -1 to recheck from the beginning
        }
        cout << arr[i] << " ";
    }

    // Print the last element separately (it won't be included in the loop)
    cout << arr[len - 1] << " ";

    return 0;
}
