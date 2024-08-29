#include <iostream>

int fatorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    int n = 4;
    int fat = fatorial(n);
    std::cout << std::endl << "Fatorial: " << n << "! = " << fat << std::endl;
}

// RESPOSTAS SLIDE:
//  1) O(n^3)
//  2) O(n^2)
//  3) O(n^n)
//  4) O(n^n)
//  5) O(2^n^2)
//  6) O(6*547*326) -> 1
//  7) O(n!)
//  8) O(n*m)       -> O(n+m)
//  9) O(n^2)       -> O(n^2+m)
// 10) O(n*m)
