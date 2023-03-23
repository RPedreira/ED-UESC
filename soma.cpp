#include <bits/stdc++.h>

using namespace std;

void soma_inversa (int *V1, int *V2, int *V3, int tam){
    tam--;
    for (int i=0; i <= tam ; i++) V3[i] = V1[i] + V2[tam-i];
}

int main(){
    int tamanho;

    while (cin >> tamanho){
        int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];

        for(int i=0; i < tamanho; i++) cin >> vetor1[i];
        for(int i=0; i < tamanho; i++) cin >> vetor2[i];

        soma_inversa (vetor1, vetor2 , vetor3, tamanho);

        for(int i=0; i < tamanho; i++) cout << vetor3[i] << ' ';
        cout << endl;
    }
}
