#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main ()
{
    // Variable normal
    int x=10;
    cout << "El valor de x:" << x << endl;   //Imprimir el valor
    cout << "La direccion de x es:" << &x <<endl;  // Dirección de la variable
    cout << "El tamaño de x es: " << sizeof(x) << endl; //tamaño
    
    //Variable puntero
    int* ptrX; //Nomenclatura camello  Ejemplo: nombreArchivo
               //Nomenclatura C        Ejemplo: nombre_archivo
              
    // Asignando la direccion de X al puntero ptrX 
    ptrX = &x;
    
    cout << "El valor de ptrX es:" << ptrX << endl; // Imprimir el valor 
    cout << "La direccion de ptrX es:" << &ptrX <<endl;  // Dirección de la variable
    cout << "El tamaño de ptrX es: " << sizeof(ptrX) << endl; //tamaño
    
    
    
    
    
    
    
    return 0;
}