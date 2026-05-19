#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	 int x, a, b;

    do {
        cout << "Digite um valor positivo para X: ";
        cin >> x;
    }  while (x <= 0);

    cout << "Digite o valor de A (inicio do intervalo): ";
    cin >> a;

    do {
        cout << "Digite o valor de B (deve ser maior que A = " << a << "): ";
        cin >> b;
    } while (b <= a);

    cout << "Tabuada do " << x << " de " << b << " ate " << a << " (decrescente):" << endl;
    for (int i = b; i >= a; i--) {
        cout << x << " x " << i << " = " << x * i << endl;
    }
    
	return 0;
}