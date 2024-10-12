#include <iostream>
#include <string>

using namespace std;

// PILHA:
class Pilha {
private:
    int size;
    int top;
    string* elements;

public:
    Pilha(int size) {
        this->size = size;
        this->top = -1;
        this->elements = new string[size];
    }

    bool isEmpty() {
        return (this->top == -1);
    }

    bool isFull() {
        return (this->top == this->size - 1);
    }

    string getElements() {
        string str = "";
        if (this->isEmpty()) {
            str += "Vazia...";
        }
        else {
            for (int i = 0; i <= this->top; i++) {
                str += this->elements[i] + " ";
            }
        }
        return str;
    }

    void insert(string element) {
        if (this->isFull()) {
            cout << "\n A pilha esta cheia !!!" << endl;
        }
        else {
            this->top++;
            this->elements[this->top] = element;
            cout << endl << " O elemento '" << element << "' foi inserido na pilha..." << endl;
        }
        cout << " Pilha: " << this->getElements() << endl;
    }

    void remove() {
        if (this->isEmpty()) {
            cout << "\n A pilha esta vazia !!!" << endl;
        }
        else {
            cout << endl << " O elemento '" << this->elements[this->top] << "' foi removido da pilha..." << endl;
            this->top--;
        }
        cout << " Pilha: " << this->getElements() << endl;
    }
};

// CRIAR PILHA:
Pilha createPilha() {
    int size;

    cout << endl << " ---> MENU - NOVA PILHA:" << endl;
    cout << endl << " Insira o tamanho da pilha: ";
    cin >> size;

    Pilha pilha = Pilha(size);
    cout << endl << " Nova pilha criada..." << endl;

    return pilha;
}

// INSERIR ELEMENTO:
string newElement() {
    string element;

    cout << endl << " ---> MENU - NOVO ELEMENTO:" << endl;
    cout << endl << " Insira um novo elemento: ";
    cin >> element;

    return element;
}

// FUNCAO PRINCIPAL:
int main() {
    Pilha pilha = createPilha();
    string choice;

    while (true) {
        cout << endl << " ---> MENU:" << endl;
        cout << " 1 - Sair" << endl;
        cout << " 2 - Nova pilha" << endl;
        cout << " 3 - Inserir elemento" << endl;
        cout << " 4 - Remover elemento" << endl;

        cout << endl << " Escolha: ";
        cin >> choice;

        if (choice == "1") {
            break;
        }
        else if (choice == "2") {
            pilha = createPilha();
        }
        else if (choice == "3") {
            pilha.insert(newElement());
        }
        else if (choice == "4") {
            pilha.remove();
        }
        else {
            cout << endl << " ERRO: Opcao invalida !!!" << endl;
        }
    }

    return 0;
}
