#include <iostream>
#include <fstream>
#include "classData.hpp"

using namespace std;

void menu(){
  bool sair = false;
  
  while (sair != true){
    
    cout <<"**********MENU PRINCIPAL**********" << endl << endl;
  
    cout <<"(1)............Deseja ler/abrir um arquivo"<<endl;
    cout <<"(2)............Incluir elemento" << endl;
    cout <<"(3)............Visualizar o registro entre posicao dos elementos" << endl;
    cout <<"(4)............Alterar dados do registro entre posicao dos elementos" << endl;
    cout <<"(5)............Imprimir Dados" << endl;
    cout <<"(6)............Sair" << endl << endl;
    cout <<"**********************************" << endl<< endl;
    
  
    cout << "Digite o numero da opcao desejada:";
    
    char opcao;
    cin >> opcao;
    
    
    switch(opcao){
     /* case"1":
      
      break;
      
      case"2":
      
      break;
      
      case"3":
      
      break;
      
      case"4":
      
      break;
      
      case"5":
      
      break;
      */
      
      case '6':
      sair = true;
      
      break;
      
    default:
      cout << "opcao invalida." << endl;
  }
  
}
}


int main(int argc, char const *argv[])
{
    menu();
    
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
