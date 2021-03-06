#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include<string>
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    void setFirstName(const string &);//set first name
    string getFirstName()const;//return first name

    void setLastName(const string &);//set last name
    string getLastName()const;//return last name

    void setSocialSecurityNumber(const string &);//set &ssn
    string getSocialSecurityNumber()const;//return SSN

    virtual double earnings()const=0;//pure virtual
    virtual void print()const;//virtual
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};

#endif // EMPLOYEE_H_INCLUDED
