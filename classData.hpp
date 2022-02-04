#ifndef CLASSDATA_HPP
#define CLASSDATA_HPP

#define TAM_NAME 55

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
        short int year;
        char* preenche(std::string palavra);
    public:
        sanFrancisco();
        ~sanFrancisco();

        int getId();
        void setId(int _id);

        char* getEmployeeName();
        void setEmployeeName(char* _employeeName);
        void setEmployeeName(std::string _employeeName);

        char* getJobTitle();
        void setJobTitle(char* _jobTitle);
        void setJobTitle(std::string _jobTitle);

        char* getBasePay();
        void setBasePay(char* _basePay);
        void setBasePay(std::string _basePay);

        char* getOvertimePay();
        void setOvertimePay(char* _overtimePay);
        void setOvertimePay(std::string _overtimePay);

        char* getOtherPay();
        void setOtherPay(char* _otherPay);
        void setOtherPay(std::string _otherPay);

        char* getBenefits();
        void setBenefits(char* _benefits);
        void setBenefits(std::string _benefits);

        char* getTotalPay();
        void setTotalPay(char* _totalPay);
        void setTotalPay(std::string _totalPay);

        char* getTotalPayEBenefits();
        void setTotalPayEBenefits(char* _totalPayEBenefits);
        void setTotalPayEBenefits(std::string _totalPayEBenefits);
        
        short int getYear();
        void setYear(short int _year);
};

#endif