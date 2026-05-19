#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	 int valores[10];
    int soma = 0, maior;

    for (int i = 0; i < 10; i++) {
        do {
            cout << "Digite o valor " << i + 1 << " (positivo): ";
            cin >> valores[i];
            if (valores[i] <= 0)
                cout << "Erro: digite um valor positivo!\n";
        } while (valores[i] <= 0);
        soma += valores[i];
    }

    maior = valores[0];
    for (int i = 1; i < 10; i++) {
        if (valores[i] > maior)
            maior = valores[i];
    }

    cout << "\nResultados:" << endl;
    cout << "a) Maior valor: " << maior << endl;
    cout << "b) Soma dos valores: " << soma << endl;
    cout << "c) Media aritmetica: " << (double)soma / 10 << endl;
	return 0;
}