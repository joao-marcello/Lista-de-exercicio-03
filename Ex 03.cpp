#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	char sexo;
    do {
        cout << "Digite o sexo (F ou M): ";
        cin >> sexo;
        sexo = toupper(sexo);
    } while (sexo != 'F' && sexo != 'M');
    cout << "Sexo aceito: " << sexo << endl;

	
	return 0;
}