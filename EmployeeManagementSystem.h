#ifndef EMPLOYEEMANAGEMENTSYSTEM_H
#define EMPLOYEEMANAGEMENTSYSTEM_H

#include <iostream>
#include <vector>
#include "Employee.h"

class EmployeeManagementSystem {
private:
    std::vector<Employee> employees;

public:
    // Constructor
    EmployeeManagementSystem();

    // Add a new employee
    void addEmployee(const Employee& employee);

    // Get employee details by ID
    const Employee* getEmployeeDetails(int id) const;

    // Update employee details
    bool updateEmployee(int id, const std::string& newName, const std::string& newPosition, double newSalary);

    // Delete an employee
    bool deleteEmployee(int id);

    // Display all employees
    void displayAllEmployees() const;
};

#endif // EMPLOYEEMANAGEMENTSYSTEM_H

