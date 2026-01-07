#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Entrez le premier nombre : ";
    cin >> a;

    cout << "Entrez le second nombre : ";
    cin >> b;

    if (a > b) {
        cout << "Le plus grand est : " << a << endl;
    } else {
        cout << "Le plus grand est : " << b << endl;
    }

    return 0;
}
