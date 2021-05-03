//merge sort
#include<iostream>
using namespace std;
void mostrar(int array[], int tam) {
   for(int i = 0; i<tam; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int array[], int a, int m, int z) { 
   int i, j, k, nl, nr;
   nl = m-a+1; nr = z-m; //tamaño del sub  array isq y der 
   int larr[nl], rarr[nr];
   for(i = 0; i<nl; i++)
      larr[i] = array[a+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
      i = 0; j = 0; k = a;
 
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j])
       {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //elemento de la izq
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //elem de la derec
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int array[], int a, int z) {
   int mid;
   if(a < z) {
      int mid = a+(z-a)/2;
      //ordena el primero y segundo array
      mergeSort(array, a, mid);
      mergeSort(array, mid+1, z);
      merge(array, a, mid, z);
   }
   
}
int main() {
   int n;
   cout << "tamaño del array: ";
   cin >> n;
   int arr[n];   
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "lista : ";
   mostrar(arr, n);
   mergeSort(arr, 0, n-1);    
   cout << "nuevo lista : ";
   mostrar(arr, n);
}
