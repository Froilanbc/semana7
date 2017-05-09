#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    // Limite maximo
    cout << "Limite maximo de Random: " << RAND_MAX << endl << endl;
    
    //Generar 10 numeros randoms
    for ( int i=0; i<10 ; i++)
    {
        cout << "numero" << i+1 << " : " << rand() << endl;
    }
    
    //Generar 10 numeros randoms entre el rango de 0 a 99
    for (int i=0; i<10 ; i++)
    {
        cout << "numero" << i+1 << " : " <<rand() % 100 <<endl;
    }
    
      //Generar 10 numeros randoms entre el rango de 0 a 1
    for (int i=0; i<10 ; i++)
    {
        cout << "numero" << i+1 << " : " <<rand() / float(RAND_MAX) <<endl;
    }
    
    
    
    return 0;
}