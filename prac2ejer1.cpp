//pract2ejer1
//1. Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
//Tamaño del arreglo 1000000. (Iterativa y recursiva).
#include<cstdlib>
#include<time.h>
#include<iostream>
using namespace std;
long long int sum_itera(int V[],int t){
    long long int sum=0;
    srand(time(NULL));
    for(int i=0;i<t;i++){
        V[i]= rand()%10;
        sum+=V[i];
        //cout<<V[i]<<" ";
    }
    return sum;
}
long long int sum_recur(int V[],int  t){
    if(t==0){
        return V[t];
    }
    return V[--t+1] + sum_recur(V,t);
}
int main(){
    long long int n=100000;
    int A[n];
    cout<<"iterativa "<<sum_itera(A,n);
    cout<<"\nrecursiva "<<sum_recur(A,n-1);
}