#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Variables
    int numero = 20;
    string texto = "UTEC";
    
    //Punteros de las variables
    int* ptrNumero = &numero;
    string* ptrTexto = &texto;
    
    //Imprimiendo los valores de las variables usando operador *
    cout << "El valor del numero es: " << *ptrNumero << endl;
    cout << "El valor del texto es: " << *ptrTexto << endl;
    
    
    
    return 0;
}