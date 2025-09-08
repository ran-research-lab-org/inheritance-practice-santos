// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
// Attributes
protected:
    std::string name;
    int id;
    std::string type; // "Hourly" or "Salaried"

// Methods
public:
	// TODO: Constructor
    Employee();
    Employee(const std::string& name, int id, const std::string& type, double payPerHour, double workedHours, double yearlyPayment);
    virtual ~Employee() {}

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;
    std :: string getType();
    std :: string getName();
    int getId() const;

    // 
};




#endif

