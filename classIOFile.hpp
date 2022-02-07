#ifndef CLASSIOFILE_HPP
#define CLASSIOFILE_HPP

#include <iostream>
#include <fstream>
#include "classData.hpp"

class classIOFile
{
private:
    std::fstream file;    
public:
    classIOFile(std::string _path);
    ~classIOFile();
    void swap(sanFrancisco &_de , sanFrancisco &_para);
    void adicionaElementoPosi(int _posi, sanFrancisco &_data);
    void visualizaEntrePosi(int _inicial,int _final);
    void alteraDadoPosi(int _posi, sanFrancisco &_data);
    void trocaDadoPosi(int _de, int _para);
    void imprimeTudo();
};

#endif