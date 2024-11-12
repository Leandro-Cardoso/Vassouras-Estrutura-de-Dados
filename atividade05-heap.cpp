#include <iostream>
#include <vector>

using namespace std;

// ESTRUTURA BASE:
struct Elemento {
    int chave;
};

// CRIACAO DO HEAP:
class Heap {
private:
    vector<Elemento> T;
    int n;

public:
    Heap(vector<Elemento> T) {
        this->T = T;
        this->n = T.size();

        for (int i = this->n / 2 - 1; i >= 0; --i) {
            this->descer(i);
        }
    }

    void subir(int i) {
        int j = i / 2;

        if (j >= 1) {
            if (this->T[i].chave > this->T[j].chave) {
                Elemento temp = this->T[i];
                this->T[i] = this->T[j];
                this->T[j] = temp;
                subir(j);
            }
        }
    }

    void descer(int i) {
        int j = 2 * i;
        while (j <= this->n) {
            if (j < this->n && this->T[j + 1].chave > this->T[j].chave) {
                j = j + 1;
            }

            if (this->T[i].chave < this->T[j].chave) {
                Elemento temp = this->T[i];
                this->T[i] = this->T[j];
                this->T[j] = temp;
                i = j;
                j = 2 * i;
            }
            else {
                break;
            }
        }
    }

    void print() {
        for (int i = 0; i < n; i++) {
            cout << " " << this->T[i].chave;
        }
        cout << endl;
    }
};

// METODO PRINCIPAL:
int main() {
    vector<Elemento> elementos = {
        {92}, {85}, {90}, {47}, {93}, {34}, {20}, {40}, {46}
    };

    Heap heap(elementos);

    cout << endl << "HEAP:";
    heap.print();

    return 0;
}
