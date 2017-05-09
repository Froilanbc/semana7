#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main ()
{
    // Pedir el nombre del archivo
    string nombrearchivo;
    cout << "Ingrese el nombre del archivo: ";
    cin >> nombrearchivo;
    
    ofstream archivo(nombrearchivo);
    
   cout << "Limite maximo de Random: " << RAND_MAX << endl << endl;
  
    //Pedir la cantidad de numeros a generar
    
     int n=1;
     cout <<"Ingrese la cantidad de numeros a generar: ";  
     cin >> n;
    
    //Pedir limite del rango y validar que no sea mayor a RAND_LIN
      
    int limite;
    do
    {
        cout <<"Ingrese el limite de rango: ";
        cin >> limite;
        
    }while ( limite >= RAND_MAX)
        
    
    //Generar numeros aleatorios que deberan ser grabados en el archivo
    
    
    for ( int i=0; i<n ; i++)
    {
        archivo << "numero" << i+1 << " : " << rand() % limite << endl;
    }
    
    
    
    // Cerrar el archivo
    
    archivo.close();
    
    return 0;
}