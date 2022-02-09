#include <iostream>
//#include <fstream>
//#include <sstream>
#include "classData.hpp"
//#include "classIOFile.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
    sanFrancisco obj;

    char* name = new char[55];
    name = "ninguem";

    char* job = new char[55];
    job = "nada";

    char* base = new char[55];
    base = "1";

    char* overtime = new char[55];
    overtime = "2";

    char* other = new char[55];
    other = "3";

    char* benefit = new char[55];
    benefit = "4";

    char* total = new char[55];
    total = "5";

    char* totalAndBenefits = new char[55];
    totalAndBenefits = "6";

    obj.setEmployeeName(name);
    obj.setJobTitle(job);
    obj.setBasePay(base);
    obj.setOvertimePay(overtime);
    obj.setOtherPay(other);
    obj.setBenefits(benefit);
    obj.setTotalPay(total);
    obj.setTotalPayEBenefits(totalAndBenefits);

    cout << obj.getEmployeeName() << endl;
    cout << obj.getJobTitle() << endl;
    cout << obj.getBasePay() << endl;
    cout << obj.getOvertimePay() << endl;
    cout << obj.getOtherPay() << endl;
    cout << obj.getBenefits() << endl;
    cout << obj.getTotalPay() << endl;
    cout << obj.getTotalPayEBenefits() << endl;

    char* name2 = new char[55];
    name2 = "ALTERADO";

    char* job2 = new char[55];
    job2 = "ALT";

    char* base2 = new char[55];
    base2 = "100";

    char* overtime2 = new char[55];
    overtime2 = "200";

    char* other2 = new char[55];
    other2 = "300";

    char* benefit2 = new char[55];
    benefit2 = "400";

    char* total2 = new char[55];
    total2 = "500";

    char* totalAndBenefits2 = new char[55];
    totalAndBenefits2 = "600";

    obj.setEmployeeName(name2);
    obj.setJobTitle(job2);
    obj.setBasePay(base2);
    obj.setOvertimePay(overtime2);
    obj.setOtherPay(other2);
    obj.setBenefits(benefit2);
    obj.setTotalPay(total2);
    obj.setTotalPayEBenefits(totalAndBenefits2);

    cout << obj.getEmployeeName() << endl;
    cout << obj.getJobTitle() << endl;
    cout << obj.getBasePay() << endl;
    cout << obj.getOvertimePay() << endl;
    cout << obj.getOtherPay() << endl;
    cout << obj.getBenefits() << endl;
    cout << obj.getTotalPay() << endl;
    cout << obj.getTotalPayEBenefits() << endl;

    return 0;
}