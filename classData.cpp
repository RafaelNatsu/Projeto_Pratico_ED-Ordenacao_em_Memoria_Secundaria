#include "classData.hpp"
#include <iostream>

sanFrancisco::sanFrancisco()
{
    id = 0;
    employeeName = new char[TAM_NAME];
    jobTitle = new char[TAM_NAME];
    basePay = new char[TAM_NAME];
    overtimePay = new char[TAM_NAME];
    otherPay = new char[TAM_NAME];
    benefits = new char[TAM_NAME];
    totalPay = new char[TAM_NAME];
    totalPayEBenefits = new char[TAM_NAME];
    year = 0;
}

sanFrancisco::~sanFrancisco()
{
    delete [] employeeName;
    delete [] jobTitle;
    delete [] basePay;
    delete [] overtimePay;
    delete [] otherPay;
    delete [] benefits;
    delete [] totalPay;
    delete [] totalPayEBenefits;
    employeeName = nullptr;
    jobTitle = nullptr;
    basePay = nullptr;
    overtimePay = nullptr;
    otherPay = nullptr;
    benefits = nullptr;
    totalPay = nullptr;
    totalPayEBenefits = nullptr;
}

char* sanFrancisco::preenche(std::string palavra)
{
    char *aux = new char[TAM_NAME];
    for (int i = 0; i < TAM_NAME; i++)
    {
        aux[i] = palavra[i];
    }
    return aux;
}

int sanFrancisco::getId()
{
    return id;
}

void sanFrancisco::setId(int _id)
{
    id = _id;
}

char* sanFrancisco::getEmployeeName()
{
    return employeeName;
}
void sanFrancisco::setEmployeeName(char* _employeeName)
{
    employeeName = _employeeName;
}
void sanFrancisco::setEmployeeName(std::string _employeeName)
{
    employeeName = preenche(_employeeName);
}

char* sanFrancisco::getJobTitle()
{
    return jobTitle;
}
void sanFrancisco::setJobTitle(char* _jobTitle)
{
    jobTitle = _jobTitle;
}
void sanFrancisco::setJobTitle(std::string _jobTitle)
{
    jobTitle = preenche(_jobTitle);
}

char* sanFrancisco::getBasePay()
{
    return basePay;
}
void sanFrancisco::setBasePay(char* _basePay)
{
    basePay = _basePay;
}
void sanFrancisco::setBasePay(std::string _basePay)
{
    basePay = preenche(_basePay);
}

char* sanFrancisco::getOvertimePay()
{
    return overtimePay;
}
void sanFrancisco::setOvertimePay(char* _overtimePay)
{
    overtimePay = _overtimePay;
}
void sanFrancisco::setOvertimePay(std::string _overtimePay)
{
    overtimePay = preenche(_overtimePay);
}
char* sanFrancisco::getOtherPay()
{
    return otherPay;
}
void sanFrancisco::setOtherPay(char* _otherPay)
{
    otherPay = _otherPay;
}
void sanFrancisco::setOtherPay(std::string _otherPay)
{
    otherPay = preenche(_otherPay);
}

char* sanFrancisco::getBenefits()
{
    return benefits;
}
void sanFrancisco::setBenefits(char* _benefits)
{
    benefits = _benefits;
}
void sanFrancisco::setBenefits(std::string _benefits)
{
    benefits = preenche(_benefits);
}

char* sanFrancisco::getTotalPay()
{
    return totalPay;
}
void sanFrancisco::setTotalPay(char* _totalPay)
{
    totalPay = _totalPay;
}
void sanFrancisco::setTotalPay(std::string _totalPay)
{
    totalPay = preenche(_totalPay);
}

char* sanFrancisco::getTotalPayEBenefits()
{
    return totalPayEBenefits;
}
void sanFrancisco::setTotalPayEBenefits(char* _totalPayEBenefits)
{
    totalPayEBenefits = _totalPayEBenefits;
}
void sanFrancisco::setTotalPayEBenefits(std::string _totalPayEBenefits)
{
    totalPayEBenefits = preenche(_totalPayEBenefits);
}

short int sanFrancisco::getYear()
{
    return year;
}
void sanFrancisco::setYear(short int _year)
{
    year = _year;
}
