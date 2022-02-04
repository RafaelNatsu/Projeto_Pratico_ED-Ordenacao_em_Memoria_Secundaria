#include <iostream>
#include <fstream>
#include "classData.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    sanFrancisco reader;
    fstream arquivo("./san_francisco_payroll_dataset.csv");
    fstream saida("out.bin",ios::out);
    string linha = "";
    
    if (arquivo)
    {
        while (arquivo >> linha)
        {
            for (int i = 0; i < linha.length(); i++)
            {
                if(linha[i]==',');
            }
            
        }
        
    }
    


    return 0;
}
