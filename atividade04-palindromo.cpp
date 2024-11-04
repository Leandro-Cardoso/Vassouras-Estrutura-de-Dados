#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// VERIFICAR SE E PALINDROMO:
bool isPalindromo(char* characters) {
    int length = strlen(characters);

    for (int i = 0; i < length / 2; i++) {
        if (characters[i] != characters[length - i - 1]) {
            return false;
        }
    }

    return true;
}

// PEGAR A STRING DA LISTA:
string getString(char* characters) {
    string str = "";
    int length = strlen(characters);

    for (int i = 0; i < length; i++) {
        str += characters[i];
    }

    return str;
}

// FUNCAO PRINCIPAL:
int main() {
    char characters[] = "arara";

    if (isPalindromo(characters)) {
        cout << endl << " \"" << getString(characters) << "\" e um palindromo..." << endl;
    }
    else {
        cout << endl << " \"" << getString(characters) << "\" nao e um palindromo !!!" << endl;
    }

    return 0;
}
