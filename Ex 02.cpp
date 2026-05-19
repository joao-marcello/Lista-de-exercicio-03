#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a, b;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    
    do {
        cout << "Digite o segundo valor (deve ser maior que " << a << "): ";
        cin >> b;
        
    } while (b <= a);
    cout << "Valores aceitos: " << a << " e " << b << endl;

	
	
	return 0;
}