#include <iostream>
#include <fstream>
#include "classData.hpp"
#include "classIOFile.hpp"

classIOFile::classIOFile(std::string _path)
{
    file.open(_path, std::fstream::binary | std::fstream::out | std::fstream::in);
    if(!file)
        std::cerr << "Erro no arquivo" << std::endl;
}

classIOFile::~classIOFile()
{
    file.close();
}

void swap(sanFrancisco &_de , sanFrancisco &_para)
{
    sanFrancisco aux;
    aux = _de;
    _para = _de;
    _de = aux;
}

void classIOFile::adicionaElementoPosi(int _posi, sanFrancisco &_data)
{
    file.seekg(_posi*sizeof(sanFrancisco));
    sanFrancisco aux;
    file.read((char *)(&aux),sizeof(sanFrancisco));
    swap(aux,_data);
    while (!file.eof())
    {
        sanFrancisco prox;
        file.read((char *)(&aux),sizeof(sanFrancisco));
        int id = aux.getId();
        id++;
        aux.setId(id);
        file.read((char *)(&prox),sizeof(sanFrancisco));
        swap(aux,prox);
    }
    
}

void classIOFile::visualizaEntrePosi(int _inicial,int _final)
{
    int cont = _inicial;
    file.seekg(cont*sizeof(sanFrancisco));
    while(cont < _final)
    {
        sanFrancisco aux;
        file.read((char *)(&aux),sizeof(sanFrancisco));
        std::cout << aux.getId() << std::endl
                << aux.getEmployeeName() << std::endl
                << aux.getJobTitle() << std::endl
                << aux.getBasePay() << std::endl
                << aux.getOvertimePay() << std::endl
                << aux.getOtherPay() << std::endl
                << aux.getBenefits() << std::endl
                << aux.getTotalPay() << std::endl
                << aux.getTotalPayEBenefits() << std::endl
                << aux.getYear() << std::endl;
    }
}

void classIOFile::alteraDadoPosi(int _posi, sanFrancisco &_data)
{
    file.seekg(_posi*sizeof(sanFrancisco));
    sanFrancisco aux;
    file.read((char *)(&aux),sizeof(sanFrancisco));
    int id = aux.getId();
    _data.setId(id);
    aux = _data;
    file.seekg(_posi*sizeof(sanFrancisco));
    file.write((const char*)(&aux),sizeof(sanFrancisco));
}

void classIOFile::trocaDadoPosi(int _de, int _para)
{
    sanFrancisco de,para;
    file.seekg(_de*sizeof(sanFrancisco));
    file.read((char *)(&de),sizeof(sanFrancisco));
    file.seekg(_para*sizeof(sanFrancisco));
    file.read((char *)(&para),sizeof(sanFrancisco));
    swap(de,para);
    //todo: validar erro
}

void classIOFile::imprimeTudo()
{
    file.seekg(sizeof(sanFrancisco));
    sanFrancisco aux;
    while (!file.eof())
    {
        file.read((char *)(&aux),sizeof(sanFrancisco));
        std::cout << aux.getId() << std::endl
                << aux.getEmployeeName() << std::endl
                << aux.getJobTitle() << std::endl
                << aux.getBasePay() << std::endl
                << aux.getOvertimePay() << std::endl
                << aux.getOtherPay() << std::endl
                << aux.getBenefits() << std::endl
                << aux.getTotalPay() << std::endl
                << aux.getTotalPayEBenefits() << std::endl
                << aux.getYear() << std::endl;
    }
    
}