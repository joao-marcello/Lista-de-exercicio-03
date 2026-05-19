#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	 int n;
    do {
        cout << "Digite um valor positivo: ";
        cin >> n;
    } 
	
	while (n <= 0);
    
    cout << "Valor aceito: " << n << endl;
    
    
	return 0;
}