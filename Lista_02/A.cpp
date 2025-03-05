#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A,B,C,H,L;
    cin >> A >> B >> C >> H >> L;

    int caixa[] = {A,B,C};
    sort(caixa, caixa + 3);
    int janela[] = {H,L};
    sort(janela,janela + 2);

    if ((janela[0]>= caixa[0]) && (janela[1]>= caixa[1])){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}