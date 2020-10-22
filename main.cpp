#include <iostream>

using namespace std;

//variables globales y macros
#define TAM (int)50

int main()
{
    char a[TAM] = "AB11CD44F5X5";
    char numeros[TAM] = {0};
    int contDig = 0;
    cout << "Imprimir los numeros de la cadena original" << endl;
    //int numero = 0;
    //int contadorDigitos=0;

    for(int i = 0; i < TAM; i++){
        if(a[i]>='0' and a[i]<='9'){
            numeros[contDig++] = a[i];
        }
    }

   for (int var = contDig-1;var>=0; var--){
       cout << numeros[var] << endl;
   }
    return 0;
}
