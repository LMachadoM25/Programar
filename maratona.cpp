#include <iostream>
#include <string>

using namespace std;

string gerarStringPrincipal(int n) 
{
  string s = "";
  for (int i = 0; i < n / 2; i++) 
  {
    s += "()";
  }
  return s;
}

int contarOcorrencias(string texto, string substring) 
{
  int contador = 0;
  size_t pos = 0;

  while ((pos = texto.find(substring, pos)) != string::npos) 
  {
    contador++;
    pos += substring.length();
  }

  return contador;
}

int main() 
{
  int n;
  string substring;

  cin >> n;
  cin >> substring;

  string s1 = gerarStringPrincipal(n); 
  string s2 = string(n / 2, '(') + string(n / 2, ')'); 
  
  string texto1 = s1;
  string texto2 = s2;

  int ocorrenciasTexto1 = contarOcorrencias(texto1, substring);
  int ocorrenciasTexto2 = contarOcorrencias(texto2, substring);

  int total = ocorrenciasTexto1 + ocorrenciasTexto2;
  
  cout << total << endl;

  return 0;
}