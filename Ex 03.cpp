#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
  
    char sexo;
    
    cout << "Digite seu sexo";
    cin >> sexo;
    
    while (sexo != 'F' && sexo != 'M')
  
  {
  	cout << "Valor invalido" << endl;
  	cout << "Digite novamente"; 
  	cin >> sexo;
  }
  
  cout << "Condicao valida";
  
  return 0;

  
  }
