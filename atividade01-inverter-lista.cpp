#include <iostream>

int* inverter_lista(int* lista, int tamanho) {
    // INVERTE A LISTA RECEBIDA.
    int inicio = 0;
    int fim = tamanho - 1;

    while(inicio < fim) {
        int temp = lista[inicio];
        lista[inicio] = lista[fim];
        lista[fim] = temp;
        inicio++;
        fim--;
    }

    return lista;
}

int main() {
    int lista[] = {1, 2, 3, 4, 5};
    int n = sizeof(lista) / sizeof(lista[0]);

    // PRINTAR LISTA:
    std::cout << std::endl;
    std::cout << "Lista original: " << " ";
    for (int i = 0; i < n; i++) {
        std::cout << lista[i] << " ";
    }

    int* lista_invertida = inverter_lista(lista, n);

    // PRINTAR LISTA INVERTIDA:
    std::cout << std::endl;
    std::cout << "Lista invertida:" << " ";
    for (int i = 0; i < n; i++) {
        std::cout << lista_invertida[i] << " ";
    }
    std::cout << std::endl;

    getchar();

    return 0;
}
