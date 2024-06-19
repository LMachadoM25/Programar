#include <iostream>
#include <string>
#include <cctype>

int main ()
{
    std::string y;
    std::string x;

    std::getline (std::cin, x);
    std::getline (std::cin, y);

    //Deixar tudo minúsculo no programa
    for (char& c : x)
    {
        c = std::tolower(c);
    }

    for (char& c : y)
    {
        c = std::tolower(c);
    }
    
    int vezes = 0;
    
    size_t pos = y.find(x); //Econtra primeira vez que a substring ocorre

    //Continua procurando as outras ocorrências
    
    while (pos != std::string::npos) //Procura até o fim da string
    {
        vezes++;

        pos = y.find(x, pos + 1); // Encontra até a próxima ocorrência
    }

    std::cout << vezes << std::endl;

    return 0;
}