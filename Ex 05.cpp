#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int n;
    do {
        cout << "Digite um valor positivo: ";
        cin >> n;
    } while (n <= 0);

    cout << "Tabuada do " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    } 
    
    
	return 0;
}