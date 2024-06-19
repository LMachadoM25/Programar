#include <iostream>

using namespace std; //Não pode usar

int main() {
  // Declaração e inicialização das sequências
  int A[] = {2, 4, 6, 8, 10};
  int B[] = {1, 3, 5, 7, 9};
  int N = sizeof(A) / sizeof(A[0]);
  int M = sizeof(B) / sizeof(B[0]);
  int C[N + M]; // Sequência de saída com tamanho N + M

  // Índices para percorrer cada sequência
  int i = 0, j = 0, k = 0;

  // Comparação e interação elemento a elemento
  while (i < N && j < M) 
  {
    if (A[i] <= B[j]) 
    {
      C[k++] = A[i++];
    } 
    
    else 
    {
      C[k++] = B[j++];
    }
  }

  // Adição dos elementos restantes de A
  while (i < N) 
  {
    C[k++] = A[i++];
  }

  // Adição dos elementos restantes de B
  while (j < M) 
  {
    C[k++] = B[j++];
  }

  cout << "Sequência ordenada: ";
  for (int i = 0; i < N + M; i++) 
  {
    cout << C[i] << " ";
  }
  cout << endl;

  return 0;
}
