//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). Tamaño del
//arreglo 1000000.
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void agregar(int V[],int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
         V[i]= rand()%10;
    }
    
}
void mostrar(int V[],int n){
    for(int i=0;i<n;i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}
void invertir_iterativ(int V[],int n){
    int mid=n/2;
    int val_temp;
    for(int i=0;i<mid;i++){
        val_temp= V[i];
        V[i]=V[n-i];
        V[n-i]=val_temp;
    }
}
void invertir_recursiv(int V[],int n,int i){  //n=3
    int temp=V[n+i]; // 
    if(n==0){
        V[n]=V[n*2];
        V[n*2]=temp;
        i++;
    }
    else{
        V[n]=V[n*2];
        V[n*2]=temp;
        i++;
        invertir_recursiv(V,n-1,i);
    }
}
int main(){
int n=9;
int A[n];
agregar(A,n);
mostrar(A,n);
cout<<endl;
invertir_iterativ(A,n-1);
mostrar(A,n);
cout<<endl;
invertir_recursiv(A,(n/2)-1,1); //n=3
mostrar(A,n);
}