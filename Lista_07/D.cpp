#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignorar o caractere de nova linha após o número N

    string A, B;
    getline(cin, A);
    getline(cin, B);

    // Remover caracteres não alfabéticos e converter para minúsculas
    string cleanA = "", cleanB = "";
    for (char c : A) {
        if (isalpha(c)) {
            cleanA += tolower(c);
        }
    }
    for (char c : B) {
        if (isalpha(c)) {
            cleanB += tolower(c);
        }
    }

    // Ordenar as strings limpas
    sort(cleanA.begin(), cleanA.end());
    sort(cleanB.begin(), cleanB.end());

    // Verificar se as strings ordenadas são iguais
    if (cleanA == cleanB) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
