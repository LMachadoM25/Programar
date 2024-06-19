#include <iostream>

int main() {
    int n, dist = 0;

    std::cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) 
    {
        std::cin >> array[i];
    }

    int maior1 = array[0];
    int maior2 = array[0];

    int pos1 = 0;
    int pos2 = 0;

    for (int i = 1; i < n; i++) 
    {
        if (array[i] > maior1) 
        {
            maior1 = array[i]; // Atualizando o primeiro maior número
            pos1 = i; // Atualizando a posição do primeiro maior número
        } 
        
        else if (array[i] >= maior2) 
        {
            maior2 = array[i]; // Atualizando apenas o segundo maior número
            pos2 = i - 1; // Atualizando a posição do segundo maior número
        }
    }

    dist = pos2 - pos1;

    std::cout << dist << std::endl;

    return 0;
}

/*
#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maior = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maior)
        {
            maior = arr[i];
        } 
    }

    int conta = 0;

    for (int i = 0; arr[i] < maior; i++)
    {
        conta++;
    }

    for (int i = n - 1; arr[i] < maior; i--)
    {
        conta++;
    }

    cout << n - conta - 2;

    return 0;
}*/

