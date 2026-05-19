#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	 for (int n = 1; n <= 20; n++) {
        cout << "\nTabuada do " << n << ":" << endl;
        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }
        if (n < 20) {
            cout << "Pressione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
    } 
    
	return 0;
}