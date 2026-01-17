#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 0) {
        cout << "Błąd: liczba musi być nieujemna!" << endl;
        return 1;
    }
    cout << n << endl;
    return 0;
}
