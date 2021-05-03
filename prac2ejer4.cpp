//Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void agregar(int V[],int n){
    srand(time(NULL));
    for (long long int i = 0; i < n; i++) {
         V[i]= rand()%10;
    } 
}
void mostrar(int V[],int n){
    for(long long int i=0;i<n;i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}
void tam_iterativ(int V[]){
    long long int i=0;
    while(V[i]|=NULL || V[i]==0){
        cout<<V[i]<<" ";
        i++;
    }
}
int main(){
    int n=10;
    int V[n];
    agregar(V,n);
    mostrar(V,n);
    cout<<"mostrar "<<endl;
    tam_iterativ(V);
    return 0;
}