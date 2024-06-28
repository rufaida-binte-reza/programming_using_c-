#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int k = 0;
        int total_slices = 0;

        while (total_slices < n) {
            k++;
            total_slices = k * (k + 1) / 2;
        }

        std::cout << k << std::endl;
    }

    return 0;
}
