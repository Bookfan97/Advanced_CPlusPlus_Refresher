// Advanced_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Employee {
protected:
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
    string getName()
    {
        return name;
    }
    void setName(string empName) 
    {
        name = empName;
    }
    double getPay() 
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
        string salary;
        stm << name << ":" << pay;
        return stm.str();
    }
    double grossPay(int hours)
    {
        return pay * hours;
    }
};

class Manager : public Employee
{
private:
    bool salaried;
public:
    Manager() : salaried(true) {}
    Manager(string name, double payrate, bool isSalaried)
        : Employee(name, payrate)
    {
        salaried = isSalaried;
    }
    bool getSalaried()
    {
        return salaried;
    }
    double grossPay(int hours)
    {
        if (salaried)
        {
            return pay;
        }
        else
        {
            return pay * hours;
        }
    }
    string toString() 
    {
        stringstream stm;
        string salary;
        if (salaried) 
        {
            salary = "Salaried";
        }
        else 
        {
            salary = "Hourly";
        }
        stm << name << ": " << pay << ": " << salary << endl;
        return stm.str();
    }
};

int main()
{
    vector<Employee> emps;
    Employee emp1("Jane Smith", 15.00);
    Employee emp2("Bill Brown", 45.00);
    Manager emp3("Bob Brown", 10000.00, true);
    emps.push_back(emp1);
    emps.push_back(emp2);
    emps.push_back(emp3);
    for (int i = 0; i < emps.size(); i++)
    {
        cout << "Employee Gross Pay: $" << emps[i].grossPay(40) << endl;
    }
//    cout << "Employee Name: "<<emp1.getName() << endl;
//    cout << "Employee Pay: $"<<emp1.getPay() << endl;
//    cout << "Employee Gross Pay: $" << emp1.grossPay(40) << endl;
//    cout << "--------------------------------------------"<< endl;
//    cout << "Employee Name: "<<emp2.getName() << endl;
//    cout << "Employee Pay: "<<emp2.getPay() << endl;
//    cout << "Employee Gross Pay: $" << emp2.grossPay(40) << endl;
//    cout << "--------------------------------------------" << endl;
//    cout << "Employee Name: " << emp3.getName() << endl;
//    cout << "Employee Pay: " << emp3.getPay() << endl;
//    cout << "Salaried? " << emp3.getSalaried() << endl;
//    cout << "Employee Gross Pay: $" << emp3.grossPay(40) << endl;
//    cout << emp3.toString() << endl;
//    return 0;
}

