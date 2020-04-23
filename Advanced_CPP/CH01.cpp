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
        pay = payrate;
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

class Manager : public Employee
{
private:
    bool salaried;
public:
    Manager(string name, double payrate, bool isSalaried)
        : Employee(name, payrate)
    {
        salaried = isSalaried;
    }
    bool getSalaried()
    {
        return salaried;
    }
};

int main()
{
    Employee emp1("Jane Smith", 25000);
    Employee emp2("Bill Brown", 45000);
    Manager emp3("Bob Brown", 1000000, true);
    cout << "Employee Name: "<<emp1.GetName() << endl;
    cout << "Employee Pay: "<<emp1.GetPay() << endl;
    cout << "Employee Name: "<<emp2.GetName() << endl;
    cout << "Employee Pay: "<<emp2.GetPay() << endl;
    cout << "Employee Name: " << emp3.GetName() << endl;
    cout << "Employee Pay: " << emp3.GetPay() << endl;
    cout << "Salaried? " << emp3.getSalaried() << endl;
    return 0;
}

