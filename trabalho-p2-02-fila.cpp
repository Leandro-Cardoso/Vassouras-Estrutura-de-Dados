#include <iostream>
#include <string>

using namespace std;

// FILA:
class Fila {
private:
    int size, first, last;
    string* elements;

public:
    Fila(int size) {
        this->size = size;
        this->first = -1;
        this->last = -1;
        this->elements = new string[size];
    }

    void insert(string element) {
        if ((this->last + 1) % this->size == this->first) {
            cout << " ERRO: A fila esta cheia !!!" << endl;
        }
        else {
            if (this->first == -1) {
                this->first = 0;
                this->last = 0;
            }
            else if (this->last == this->size - 1 && this->first != 0) {
                this->last = 0;
            }
            else {
                this->last++;
            }

            this->elements[this->last] = element;

            cout << " O elemento \"" << element << "\" foi adicionado a fila..." << endl;
        }

        cout << " Fila: " << this->toString() << endl;
    }

    void remove() {
        if (this->first == -1) {
            cout << " ERRO: A fila esta vazia !!!" << endl;
        }
        else {
            string element = elements[this->first];
            elements[this->first] = -1;

            if (this->first == this->last) {
                this->first = -1;
                this->last = -1;
            }
            else if (this->first == this->size - 1) {
                this->first = 0;
            }
            else {
                this->first++;
            }

            cout << " O elemento \"" << element << "\" foi removido da fila..." << endl;
        }

        cout << " Fila: " << this->toString() << endl;
    }

    string toString() {
        string str = "";

        if (this->first == -1) {
            str += " Vazia...";
        }
        else {
            for (int i = this->first; i < this->size; i++) {
                str += " " + this->elements[i];
            }

            if (this->first > this->last) {
                for (int i = 0; i <= this->last; i++) {
                    str += " " + this->elements[i];
                }
            }
        }

        return str;
    }
};

// CRIAR FILA:
Fila createFila() {
    int size;

    cout << endl << " ---> MENU - NOVA FILA:" << endl;
    cout << endl << " Insira o tamanho da fila: ";
    cin >> size;

    Fila fila = Fila(size);

    cout << endl << " Nova fila criada..." << endl;

    return fila;
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
    Fila fila = createFila();

    int choice;

    while (true) {
        cout << endl << " ---> MENU:" << endl;
        cout << " 1 - Sair" << endl;
        cout << " 2 - Nova fila" << endl;
        cout << " 3 - Inserir elemento" << endl;
        cout << " 4 - Remover elemento" << endl;

        cout << endl << " Escolha: ";
        cin >> choice;

        if (choice == 1) {
            break;
        }
        else if (choice == 2) {
            fila = createFila();
        }
        else if (choice == 3) {
            fila.insert(newElement());
        }
        else if (choice == 4) {
            fila.remove();
        }
        else {
            cout << endl << " ERRO: Opcao invalida !!!" << endl;
        }
    }

    return 0;
}
