#include <iostream>
using namespace std;

int main(){
    int N_estacoes, Entrada, Entrada_total = 0, saida, Saida_total = 0,resultado;
    cin >> N_estacoes;
    if(N_estacoes == 1){
        cin >> Entrada >> saida;
        Entrada_total = Entrada;
        cout << Entrada_total << endl;
    }else{
        for(int j=0; j<N_estacoes;j++){
            cin >> Entrada >> saida;
            Entrada_total += Entrada;
            Saida_total += saida;
        }
        resultado = Entrada_total-Saida_total;
        cout << resultado << endl;
    }
    exit(0);
}