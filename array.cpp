#include <iostream>
// using namespace std; Please, don't use namespace std.
int main(void) {
    int n;
    std::cout << "Enter the number of elements of array : " << std::endl;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << ' '; // Use char instead of string.
    }
    std::cout << std::endl;
    return 0;
}
