#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    cout << "Soma dos inteiros de 1 a 100: " << soma << endl; 
    
	return 0;
}