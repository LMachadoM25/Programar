#include <bits/stdc++.h>
using namespace std;

int const max = 20;

int soma(int tam, int v1[max], int v2[max])
{
  int *arr = new int[max];

  for (int i = 0; i < max; i++)
  {
    arr[i] = v1[i] + v2[i];
  }

  return arr[];
}

int main ()
{
  int n;

  cin >> n;

  int vetor1[n], vetor2[n];

  for (int i = 0; i < n; i++)
  {
    cin >> vetor1[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> vetor2[i];
  }

  int* arr = soma(vetor1, vetor2);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  delete[] array;
  return 0;
}
