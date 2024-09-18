#include <iostream>

using namespace std;

// ESTRUTURA DO NO DA ARVORE:
struct Node {
    /*
    Todo no em uma arvore binaria possui um valor e dois ponteiros, um para a esquerda e outro para a direita.

    Exemplo:
              NO
             /  \
            /    \
    Esquerda      Direita
    */
    int data;
    Node *left;
    Node *right;
};

// CRIAR NOVO NO:
Node* newNode(int data) {
    /*
    A cada no que for criado é necessario instanciar a estrutura do no, atribuir o valor do dado passado a uma variavel, e atribuir para os dois ponteiros do no o valor nulo, pois o no ainda nao possui filhos.
    No final e retornado o proprio no construido.
    */
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// INSERIR NO NA ARVORE:
Node* insert(Node* node, int data) {
    /*
    Verifica se o nó é nulo, se sim, cria o nó e coloca ele como a raiz da arvore.
    Caso contrario, verifica se o valor é menor que o nó, se sim, inserir a esquerda utilizando recursão.
    Caso o valor seja maior que o nó, insere a direita utilizando recursão.
    No fim, retorna o nó.
    */
    if (node == NULL) {
        return newNode(data);
    }
    if (data < node->data) {
        node->left = insert(node->left, data);
    }
    else if (data > node->data) {
        node->right = insert(node->right, data);
    }
    return node;
}

// IMPRIMIR ARVORE EM ORDEM CRESCENTE:
void sortedPrint(Node* root) {
    /*
    Printa primeiro o valor da esquerda, depois o valor do nó, e por último o da direita, em cada um dos nós de forma recursiva.
    */
    if (root != NULL) {
        sortedPrint(root->left);
        cout << root->data << " ";
        sortedPrint(root->right);
    }
}

// FUNCAO PRINCIPAL:
int main() {
    /*
    Nesse exmeplo de aplicacao de arvore binaria em C++, vamos criar a seguinte arvore:
           10
          /  \
         /    \
        /      \
       5        15
      / \      /  \
     /   \    /    \
    1     7 13      16
            /
           /
         11

    E em seguida imprimir os valores da arvore lado a lado em ordem crescente.
    */
    // Definicao da raiz da arvore binaria:
    Node* root = NULL;
    root = insert(root, 10); // <- Ver descricao da funcao...

    // Insercao dos outros valores da arvore:
    insert(root, 15);
    insert(root, 5);
    insert(root, 7);
    insert(root, 1);
    insert(root, 16);
    insert(root, 13);
    insert(root, 11);

    // Impressao no terminal dos valores da arvore lado a lado de forma crescente:
    cout << std::endl << "Arvore ordenada em lista: ";
    sortedPrint(root); // <- Ver descricao da funcao...
    cout << std::endl;
    return 0;
}
