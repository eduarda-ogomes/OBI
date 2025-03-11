#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> fita(N);
    for (int i=0; i<N; i++){
        cin >> fita[i];
    }

    vector<int> distancias(N,N);

    for(int i =0; i< N; i++){
        if (fita[i] == 0){
            distancias[i] = 0;
        } else if(i > 0 && distancias[i-1] + 1 < distancias[i]){
            distancias[i] = distancias[i-1] + 1;
        }
    }

    for (int i = N-1; i >= 0; i--){
        if (fita[i]==0){
            distancias[i] = 0;
        } else if (i < N - 1 && distancias[i+1] + 1 < distancias[i]){
            distancias[i] = distancias[i+1] + 1;
        }

        for (int i = 0; i < N; i++) {
            // Limita a distância a 9
            int distancia = min(distancias[i], 9);
            
            cout << distancia;
            
            // Adiciona um espaço entre os números, mas não após o último
            if (i < N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    
        return 0;
    }
}