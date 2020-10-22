#include <iostream>

using namespace std;

//variables globales y macros
#define TAM (int)50

int main()
{
    char a[TAM] = "AB11CD44F5X5";
    for(int i = 0; i < TAM; i++){
        if(a[i]!='\0')
            cout << a[i] << endl;
    }
    cout << "Imprimir los numeros de la cadena original" << endl;
    for(int i = 0; i < TAM; i++){
        if(a[i]>='0' and a[i]<='9'){
            cout << a[i] << endl;
        }
    }
    return 0;
}
