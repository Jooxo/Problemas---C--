#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N_capivaras, G_N_pq, temp, temp_total = 0;
    cin >> N_capivaras >> G_N_pq;
    vector <int> tempos;
    for(int i=0; i<N_capivaras; i++){
        cin >> temp;
        tempos.push_back(temp);
    }
    for(int j=0; j<N_capivaras; j++){
        int resto = (G_N_pq/tempos[j]);
        temp_total += resto;
    }
    cout << temp_total << endl;
    exit(0);
}