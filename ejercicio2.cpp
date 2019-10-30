#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>


using namespace std;
int main(void) {

    int contador = 0;
    char carnet[8]; 
    int matriz[5][9];

    cout << "Ingrese su numero de carné ";
    cin>>carnet;

    //Primero llenaremos las filas con el carné
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 9; j++) {
            contador++; //cada vez que se ingrese un dato se incrementa el contador;            
            if (j!=8 && i!=4) {
                if(i==0 || i==2){
                    matriz[i][j] = (int(carnet[j])-48); // En codigo ASCII loa numeros inician en 48 es decir ASCII 48=0 49=1 ... asi que se resta 48 para que muestre el verdadero numero entero 
                }else{
                    matriz[i][7-j] = (int(carnet[j])-48); // Un carnet tiene 8 numeros es decir la casilla final es 7. Eso significa que si voy en reversa (inicio en 7) y le voy restando los valores de j puedo ingresar el carnet invertido
                }
            } else if(j==8 && i!=4) {
                matriz[i][j] = contador;
            } else if (i == 4) { //En la ultima fila se debe llenar unicamente con los valores del contador
                matriz[i][j] = contador ;
            }
        }
    }
    
    //imprimir la matriz
    
    for(int i=0; i<5; i++){
        for (int j=0; j<9; j++){
            if(i==4){
                cout<<matriz[i][j]<<" ";
            }else{
                cout<<matriz[i][j]<<"  ";
            }
        }
        cout<<"\n";
    }
      
    return 0;
}