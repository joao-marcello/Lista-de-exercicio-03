#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	
	int x, y;
	
	cout << "Digite um valor qualquer";
	cin >> x;
	
	cout << "Digite outro valor";
	cin >> y;
	 
	 while (y<x)
	 {
	 	cout << "O segundo valor devera ser maior que o primeiro" << endl;

	 	cout << "Digite novamente o segundo valor";
	 	
	 	cin >> y;
	 	
	 }
	 
	 cout << "Condicao valida";
	 
	 
	return 0;
}
