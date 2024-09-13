#include <iostream>

using namespace std;

// ESTRUTURA DO NÓ DA ARVORE:
/*
          NÓ
         /  \
        /    \
Esquerda      Direita
*/
struct Node {
    int data;
    Node *left;
    Node *right;
};

// CRIAR NOVO NÓ:
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// INSERIR NÓ NA ARVORE:
Node* insert(Node* node, int data) {
    if (node == NULL) {
        return newNode(data);
    }
    if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    }
    return node;
}

// IMPRIMIR ARVORE EM ORDEM CRESCENTE:
void sortedPrint(Node* root) {
    if (root != NULL) {
        sortedPrint(root->left);
        cout << root->data << " ";
        sortedPrint(root->right);
    }
}

// FUNÇÃO PRINCIPAL:
/*
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
*/
int main() {
    Node* root = NULL;
    root = insert(root, 10);
    insert(root, 15);
    insert(root, 5);
    insert(root, 7);
    insert(root, 1);
    insert(root, 16);
    insert(root, 13);
    insert(root, 11);

    cout << std::endl << "Arvore ordenada em lista: ";
    sortedPrint(root);
    cout << std::endl;
    return 0;
}
