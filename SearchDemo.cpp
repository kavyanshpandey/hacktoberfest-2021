#include "Search.h"
using namespace std;

int main() {
    int arr[] = {1, 5, 20, 91, 140, 150};
    int ind_interpol = interpolationSearch(arr, 0, 5, 140);
    int ind_binary = binarySearch(arr, 0, 5, 140);
    int ind_linear = linearSearch(arr, 0, 5, 140);
    cout << "Result of interpolation search  = " << ind_interpol << endl;
    cout << "Result of binary search  = " << ind_binary << endl;
    cout << "Result of linear search  = " << ind_linear << endl;
    return 0;
    
}
