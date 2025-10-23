#include <iostream>
using namespace std;

int main(){
    int N_cidades, Dist, Dist_total = 0;
    cin >> N_cidades;
    for(int j=0; j<N_cidades; j++){
        cin >> Dist; 
        Dist_total += Dist;
    }
    cout << Dist_total << endl;
    if(Dist_total >= 500){
        cout <<"Grande viagem" << endl;
    }else{
        cout << "Viagem Curta" << endl;
    }
    exit(0);
}