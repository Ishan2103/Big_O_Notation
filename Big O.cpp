#include <iostream>
using namespace std;

void printPairs(int array[], int size) {
    for (int i = 0; i < size; i++) {          
        for (int j = 0; j < size; j++) {      
            cout << array[i] << " , " << array[j] << endl;
        }
    }
}

int main() {
    int nums[] = {1, 2, 3};
    int length = sizeof(nums) / sizeof(nums[0]);

    printPairs(nums, length);  

    return 0;
}
