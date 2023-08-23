#include <iostream>
#include "Employee.h"
#include "EmployeeManagementSystem.h"

int main() {
    // Create an EmployeeManagementSystem instance
    EmployeeManagementSystem ems;

    // Add sample employees
    ems.addEmployee(Employee(1, "John Doe", "Manager", 5000.0));
    ems.addEmployee(Employee(2, "Jane Smith", "Developer", 4000.0));
    ems.addEmployee(Employee(3, "Alice Johnson", "Analyst", 3500.0));

    // Display employee details
    int idToFind = 2;
    const Employee* foundEmployee = ems.getEmployeeDetails(idToFind);
    if (foundEmployee != nullptr) {
        std::cout << "Employee found with ID " << idToFind << ":" << std::endl;
        foundEmployee->displayDetails();
    }
    else {
        std::cout << "Employee with ID " << idToFind << " not found!" << std::endl;
    }

    // Update employee details
    int idToUpdate = 1;
    if (ems.updateEmployee(idToUpdate, "John Smith", "Senior Manager", 5500.0)) {
        std::cout << "Employee details updated successfully!" << std::endl;
    }
    else {
        std::cout << "Employee with ID " << idToUpdate << " not found!" << std::endl;
    }

    // Delete an employee
    int idToDelete = 3;
    if (ems.deleteEmployee(idToDelete)) {
        std::cout << "Employee with ID " << idToDelete << " deleted successfully!" << std::endl;
    }
    else {
        std::cout << "Employee with ID " << idToDelete << " not found!" << std::endl;
    }

    // Display all employees
    std::cout << "\nAll Employees:" << std::endl;
    ems.displayAllEmployees();

    return 0;
}


