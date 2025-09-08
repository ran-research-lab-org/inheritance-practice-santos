#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
    : Employee("", 0, "Salaried", 0, 0, 0), yearlyPayment(0) {}


SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
  : Employee(name, id, "Salaried", 0, 0, yearlyPayment)
{
    this->yearlyPayment = yearlyPayment;
}

double SalariedEmployee::getYearlyPayment() {
    return yearlyPayment;
}

double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 26.0; 
}
