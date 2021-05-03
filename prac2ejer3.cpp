//Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.
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
void ordenar(int V[],int n){
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<n;j++){
            long long int temp=V[i];
            if(V[i]<V[j]){
                V[i]=V[j];
                V[j]=temp;
            }
        }
        //cout<<V[i]<<" ";
    }
}
int main(){
    long long int n=1000;
    int V[n];
    agregar(V,n);
    //mostrar(V,n);
    ordenar(V,n);
    //mostrar(V,n);

}