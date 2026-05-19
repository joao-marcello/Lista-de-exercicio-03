#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	 char resposta;

    do {
        int n;

        do {
            cout << "Digite a quantidade de valores (1 a 19): ";
            cin >> n;
            if (n <= 0 || n >= 20)
                cout << "Erro: deve ser positivo e menor que 20!\n";
        } while (n <= 0 || n >= 20);

        int maior, menor, valor;
        double soma = 0;
        int positivos = 0, negativos = 0;

        for (int i = 0; i < n; i++) {
            cout << "Digite o valor " << i + 1 << ": ";
            cin >> valor;

            if (i == 0) {
                maior = valor;
                menor = valor;
            } else {
                if (valor > maior) maior = valor;
                if (valor < menor) menor = valor;
            }

            soma += valor;
            if (valor > 0) positivos++;
            if (valor < 0) negativos++;
        }

        cout << "\nResultados:" << endl;
        cout << "a) Maior valor: " << maior << endl;
        cout << "b) Menor valor: " << menor << endl;
        cout << "c) Soma: " << soma << endl;
        cout << "d) Media: " << soma / n << endl;
        cout << "e) % Positivos: " << (double)positivos / n * 100 << "%" << endl;
        cout << "f) % Negativos: " << (double)negativos / n * 100 << "%" << endl;

        do {
            cout << "\nDeseja fazer uma nova execucao? (S/N): ";
            cin >> resposta;
            resposta = toupper(resposta);
            if (resposta != 'S' && resposta != 'N')
                cout << "Erro: resposta invalida!\n";
        } while (resposta != 'S' && resposta != 'N');

    } while (resposta == 'S');

    cout << "Programa encerrado." << endl;

	return 0;
}