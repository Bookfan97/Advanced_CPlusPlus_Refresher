// Advanced_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;

class Employee {
private:
    string name;
    double pay;
public:
    Employee()
    {
        name = "";
        pay = 0;
    }
    Employee(string empName, double payrate)
    {
        name = empName;
        payrate = payrate;
    }
    string GetName()
    {
        return name;
    }
    double GetPay()
    {
        return pay;
    }
    void setPay(double payRate)
    {
        pay = payRate;
    }
    string toString()
    {
        stringstream stm;
        stm << name << ":" << pay;
        return stm.str();
    }
};
int main()
{
    Employee emp1("Jane Smith", 250000);
    Employee emp2("Bill Brown", 450000);
    cout << emp1.toString() << endl;
    cout << emp2.toString() << endl;
    return 0;
}

