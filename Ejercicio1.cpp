#include <iostream>
using namespace std;
int main(){
    int n;
    int carnet[8];
    int inverso[8];
    for(int i=0; i<8;i++){
        cout<<"ingrese el numero de carnet numero "<<(i+1)<<":"<<endl;
        cin>>n;
        carnet[i]=n;
    }
    cout<<"su numero de carnet es:\n";
    for (int i = 0; i < 8; i++)
    {
         cout<<carnet[i];
    }
    cout<<endl;
    cout<<"su inverso es:\n";
    for (int i = 7; i >=0 ; i--){
        inverso[i]=carnet[i];
        cout<<inverso[i];
    } 
    return 0;
}