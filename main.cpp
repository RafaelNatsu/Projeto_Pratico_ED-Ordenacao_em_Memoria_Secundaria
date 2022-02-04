#include <iostream>
#include <fstream>
#include "classData.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    sanFrancisco reader;
    fstream arquivo("./data/san_francisco_payroll_dataset.csv");
    fstream saida("out.bin",ios::out);
    string linha = "";
    
    if (arquivo)
    {
        int cont = 10;
        while (arquivo >> linha and cont <=10)
        {
            // for (int i = 0; i < linha.length(); i++)
            // {
            
            // }
            cout << linha << endl;
            cont++;
        }
        
    }
    


    return 0;
}
