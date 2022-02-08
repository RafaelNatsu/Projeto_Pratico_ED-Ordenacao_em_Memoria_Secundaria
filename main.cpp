#include <iostream>
#include <fstream>
#include <sstream>
#include "classData.hpp"
#include "classIOFile.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    sanFrancisco reader;
    ifstream arquivo;
    arquivo.open("./data/san_francisco_payroll_dataset.csv");
    fstream saida("out.bin",ios::out);
    char* linha = new char[500];
    
    // o codigo foi pensado em uma tabela csv sem campos em branco
    if (arquivo)
    {
        char *str = new char[55];
        arquivo.getline(linha,500,'\n');
        while (arquivo.getline(linha,500,'\n'))
        {
            int percorre = 0,cont = 0;
            bool pass = false;
            stringstream conv;
            for (int i = 0; i < 500; i++)
            {
                if(linha[i]==',')
                {
                    //não sei se precisa colocar um caracter nulo no final da string
                    // str[percorre+1] = '\0';
                    string teste = str;
                    percorre = 0;
                    switch (cont)
                    {
                        case 0:
                            int id;
                            conv << str;
                            conv >> id;
                            reader.setId(id);
                            break;
                        case 1:
                            reader.setEmployeeName(teste);
                            break;
                        case 2:
                            reader.setJobTitle(teste);
                            break;
                        case 3:
                            reader.setBasePay(teste);
                            break;
                        case 4:
                            reader.setOvertimePay(teste);
                            break;
                        case 5:
                            reader.setOtherPay(teste);
                            break;
                        case 6:
                            reader.setBenefits(teste);
                            break;
                        case 7:
                            reader.setTotalPay(teste);
                            break;
                        case 8:
                            reader.setTotalPayEBenefits(teste);
                            break;
                        case 9:
                            cont = 0;
                            int year;
                            conv << str;
                            conv >> year;
                            reader.setYear(year);
                            saida.write((const char*)(&reader),sizeof(sanFrancisco));
                            cout << "==============achei==============" << endl;
                            cout << reader.getId() << endl
                                << reader.getEmployeeName() << endl
                                << reader.getJobTitle() << endl
                                << reader.getBasePay() << endl
                                << reader.getOvertimePay() << endl
                                << reader.getOtherPay() << endl
                                << reader.getBenefits() << endl
                                << reader.getTotalPay() << endl
                                << reader.getTotalPayEBenefits() << endl
                                << reader.getYear() << endl;
                            pass = true;
                            break;
                        default:
                            break;
                    }
                    for (int j = 0; j < 55; j++)
                    {
                        str[j] = '\0';
                    }
                    cont++;
                }
                else
                {
                    str[percorre] = linha[i];
                    percorre++;
                }
            }
            // cout << linha << endl;
        }
        
    }
    

    arquivo.close();
    saida.close();

    return 0;
}
