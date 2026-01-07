#include <iostream>
using namespace std;

int main() {
    int N, somme = 0;

    cout << "Entrez un nombre N : ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        somme += i;
    }

    cout << "La somme de 1 à " << N << " est : " << somme << endl;

    return 0;
}
