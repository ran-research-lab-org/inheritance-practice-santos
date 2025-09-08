#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
    : Employee("", 0, "Hourly", 0, 0, 0), payPerHour(0), workedHours(0) {}

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours)
    : Employee(name, id, "Hourly", payPerHour, workedHours, 0)
{
   this->payPerHour  = payPerHour;
   this->workedHours = workedHours;
}

double HourlyEmployee :: getPayPerHour(){ 
  return payPerHour;
}

double HourlyEmployee::getWorkedHours() {
    return workedHours;
}

double HourlyEmployee::calculatePay() const {
    return payPerHour * workedHours;
}


