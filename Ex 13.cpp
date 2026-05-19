#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	char resposta;

    do {
        int n;

        do {
            cout << "Digite um valor para calcular o fatorial (>= 0): ";
            cin >> n;
            if (n < 0)
                cout << "Erro: valor nao pode ser negativo!\n";
        } while (n < 0);

        long long fatorial = 1;
        for (int i = n; i >= 2; i--) {
            fatorial *= i;
        }

        cout << n << "! = " << fatorial << endl;

        do {
            cout << "Deseja fazer um novo calculo? (S/N): ";
            cin >> resposta;
            resposta = toupper(resposta);
            if (resposta != 'S' && resposta != 'N')
                cout << "Erro: resposta invalida!\n";
        } while (resposta != 'S' && resposta != 'N');

    } while (resposta == 'S');

    cout << "Programa encerrado." << endl;

	return 0;
}