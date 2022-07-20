#include <iostream>

int main() {
    int i, j, k, l;
    i = 100;
    j = 25;
    k = 13;
    std::cout << j % k << "\n";
    std::cout << 5 * (j % k) + i << "\n";
    std::cout << 5 * ((j % k) + i) / (2 * k) << "\n";
    std::cout << (5 * ((j % k) + i) / (2 * k)) / 2 << "\n";
}