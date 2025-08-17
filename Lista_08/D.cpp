#include <iostream>
#include <vector>
using namespace std;

char pode_transportar_caixas(int n, vector<int>& pesos) {
    int cabine1 = 0; // Peso da primeira cabine
    int cabine2 = 0; // Peso da segunda cabine

    for (int peso : pesos) {
        // Tentar colocar na cabine1
        if (cabine1 + peso <= cabine2 + 8) {
            cabine1 += peso;
        }
        // Tentar colocar na cabine2
        else if (cabine2 + peso <= cabine1 + 8) {
            cabine2 += peso;
        }
        else {
            return 'N'; // Não é possível transportar todas as caixas
        }
    }

    return 'S'; // É possível transportar todas as caixas
}

int main() {
    int n;
    cin >> n;
    vector<int> pesos(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> pesos[i];
    }

    char resultado = pode_transportar_caixas(n, pesos);
    cout << resultado << endl;

    return 0;
}
