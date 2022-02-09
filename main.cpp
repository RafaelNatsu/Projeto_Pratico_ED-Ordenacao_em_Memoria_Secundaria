#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "classData.hpp"
#include "classIOFile.hpp"

using namespace std;


int main()
{
    sanFrancisco reader;
    ifstream arquivo;
    arquivo.open("./data/san_francisco_payroll_dataset.csv");
    fstream saida("out.bin",ios::out);
    char* linha = new char[500];
    
    // o codigo foi pensado em uma tabela csv sem campos em branco
    if (arquivo)
    {
        //char *str = new char[55];
        arquivo.getline(linha,500,'\n');
        int cont = 0;
        while (!arquivo.eof())
        {
            arquivo.getline(linha,500,'\n');
            char *teste = new char[55];
            // cout << teste << endl;
            int i = 0;
            int j = 0;

            while (linha[i] != '\0')
            {
                if(linha[i] == ','){
                    //teste[i+1] = '\0';
                    if (cont%10 == 0){
                        int id;
                        // conv << teste;
                        // conv >> id;
                        id = stoi(teste);
                        reader.setId(id);
                    }
                    else if (cont%10 == 1){
                        reader.setEmployeeName(teste);
                    }
                    else if (cont%10 == 2){
                        reader.setJobTitle(teste);
                    }
                    else if (cont%10 == 3){
                        reader.setBasePay(teste);
                    }
                    else if (cont%10 == 4){
                        reader.setOvertimePay(teste);
                    }
                    else if (cont%10 == 5){
                        reader.setOtherPay(teste);
                    }
                    else if (cont%10 == 6){
                        reader.setBenefits(teste);
                    }
                    else if (cont%10 == 7){
                        reader.setTotalPay(teste);
                    }
                    else if (cont%10 == 8){
                        reader.setTotalPayEBenefits(teste);
                    }
                    else if (cont%10 == 9){
                        // cont = -1;
                        int year;
                        // conv << teste;
                        // conv >> year;
                        year = stoi(teste);
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
                    }
                    cont++;
                    for (int x = 0; x < j; x++)
                    {
                        teste[x] = ' ';
                    }
                    j=0;
                    
                }
                else
                {
                    teste[j] = linha[i];
                    j++;
                }
                i++;
            }
            // cout << linha << endl;
        }
        
    }
    

    arquivo.close();
    saida.close();

    return 0;
}
