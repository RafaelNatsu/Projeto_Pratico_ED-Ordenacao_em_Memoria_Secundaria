#ifndef CLASSDATA_HPP
#define CLASSDATA_HPP

#define TAM_NAME 55

#include <iostream>
class sanFrancisco
{
    private:    
        int id;
        char* employeeName;
        char* jobTitle;
        char* basePay;
        char* overtimePay;
        char* otherPay;
        char* benefits;
        char* totalPay;
        char* totalPayEBenefits;
        int year;
        char* preenche(std::string palavra);
    public:
        sanFrancisco();
        ~sanFrancisco();
        sanFrancisco& operator=(sanFrancisco& _outro);

        int getId();
        void setId(int &_id);
        void setId(sanFrancisco &_obj);

        char* getEmployeeName();
        void setEmployeeName(char* _employeeName);
        void setEmployeeName(std::string &_employeeName);
        void setEmployeeName(sanFrancisco &_obj);

        char* getJobTitle();
        void setJobTitle(char* _jobTitle);
        void setJobTitle(std::string &_jobTitle);
        void setJobTitle(sanFrancisco &_obj);

        char* getBasePay();
        void setBasePay(char* _basePay);
        void setBasePay(std::string &_basePay);
        void setBasePay(sanFrancisco &_obj);

        char* getOvertimePay();
        void setOvertimePay(char* _overtimePay);
        void setOvertimePay(std::string &_overtimePay);
        void setOvertimePay(sanFrancisco &_obj);

        char* getOtherPay();
        void setOtherPay(char* _otherPay);
        void setOtherPay(std::string &_otherPay);
        void setOtherPay(sanFrancisco &_obj);

        char* getBenefits();
        void setBenefits(char* _benefits);
        void setBenefits(std::string &_benefits);
        void setBenefits(sanFrancisco &_obj);

        char* getTotalPay();
        void setTotalPay(char* _totalPay);
        void setTotalPay(std::string &_totalPay);
        void setTotalPay(sanFrancisco &_obj);

        char* getTotalPayEBenefits();
        void setTotalPayEBenefits(char* _totalPayEBenefits);
        void setTotalPayEBenefits(std::string &_totalPayEBenefits);
        void setTotalPayEBenefits(sanFrancisco &_obj);
        
        int getYear();
        void setYear(int &_year);
        void setYear(sanFrancisco &_obj);
};

#endif