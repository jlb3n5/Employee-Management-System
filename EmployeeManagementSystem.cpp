#include "EmployeeManagementSystem.h"

// Constructor
EmployeeManagementSystem::EmployeeManagementSystem() {
    // You can initialize any necessary data members here, if needed.
}

// Add a new employee
void EmployeeManagementSystem::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

// Get employee details by ID
const Employee* EmployeeManagementSystem::getEmployeeDetails(int id) const {
    for (const Employee& employee : employees) {
        if (employee.getId() == id) {
            return &employee;
        }
    }
    return nullptr; // Return nullptr if employee not found
}

// Update employee details
bool EmployeeManagementSystem::updateEmployee(int id, const std::string& newName, const std::string& newPosition, double newSalary) {
    for (Employee& employee : employees) {
        if (employee.getId() == id) {
            employee.setName(newName);
            employee.setPosition(newPosition);
            employee.setSalary(newSalary);
            return true; // Return true if employee updated
        }
    }
    return false; // Return false if employee not found
}

// Delete an employee
bool EmployeeManagementSystem::deleteEmployee(int id) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->getId() == id) {
            employees.erase(it);
            return true; // Return true if employee deleted
        }
    }
    return false; // Return false if employee not found
}

// Display all employees
void EmployeeManagementSystem::displayAllEmployees() const {
    for (const Employee& employee : employees) {
        employee.displayDetails();
        std::cout << std::endl;
    }
}

