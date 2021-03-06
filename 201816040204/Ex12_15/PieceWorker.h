#include <iostream>
#include "Employee.h"
using namespace std;

class PieceWorker : public Employee
{
    PieceWorker(const string &, const string &, const string &, double = 0.0, double = 0.0);
    virtual ~PieceWorker(){}
    void setWage (double);
    double getWage()const;
    void setPieces (double);
    double getPieces()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double wage;
    double pieces;
};
