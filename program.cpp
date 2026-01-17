#include <iostream>
using namespace std;

long long silnia(int n) {
    if (n == 0 || n == 1) return 1;
    long long wynik = 1;
    for (int i = 2; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        cout << "Błąd: liczba musi być nieujemna!" << endl;
        return 1;
    }
    cout << silnia(n) << endl;
    return 0;
}
