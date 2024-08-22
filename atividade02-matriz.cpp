#include <iostream>

void printarMatriz(int *matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matriz[i * n + j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    int n = 3;
    int matrizA[n][n] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 3, 1}
    };
    int matrizB[n][n] = {
        {2, 0, 1},
        {3, 5, 4},
        {8, 6, 7}
    };
    int somaMatriz[n][n];

    // Soma:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            somaMatriz[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Prints:
    std::cout << "Matriz A:" << std::endl;
    printarMatriz(*matrizA, n);
    std::cout << "Matriz B:" << std::endl;
    printarMatriz(*matrizB, n);
    std::cout << "Resultado:" << std::endl;
    printarMatriz(*somaMatriz, n);
}
