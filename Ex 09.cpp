	#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int a = 1, b = 1, proximo;
    cout << "Serie de Fibonacci (30 primeiros valores):" << endl;
    cout << a << " " << b;
    for (int i = 3; i <= 30; i++) {
        proximo = a + b;
        cout << " " << proximo;
        a = b;
        b = proximo;
    }
    cout << endl;
    
    
	return 0;
}