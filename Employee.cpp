#include "Employee.h"
using namespace std;

Employee::Employee() {}

Employee::Employee(const string& name, int id, const string& type, 
                   double payPerHour, double workedHours, double yearlyPayment)
{
    this->name = name;
    this->id   = id;
    this->type = type;
}

string Employee::getType() { 
    return type; 
}

string Employee::getName() { 
    return name; 
}

int Employee::getId() const{
    return id;
}
