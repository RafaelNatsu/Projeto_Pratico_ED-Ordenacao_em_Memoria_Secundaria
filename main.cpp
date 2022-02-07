#include <iostream>
#include <fstream>
#include "classData.hpp"
#include "classIOFile.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    sanFrancisco reader;
    ifstream arquivo;
    arquivo.open("./data/san_francisco_payroll_dataset.csv");
    fstream saida("out.bin",ios::out);
    char* linha = new char[100];
    
    // o codigo foi pensado em uma tabela csv sem campos em branco
    if (arquivo)
    {
        int cont = 0;
        while (arquivo.getline(linha,100,','))
        {
            
            cout << linha << endl;
            cont++;
        }
        
    }
    

    arquivo.close();
    saida.close();

    return 0;
}
