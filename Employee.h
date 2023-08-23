// Header file for Employee

// Inclusion guard to prevent multiple inclusions of the same header file
#ifndef EMPLOYEE_H  
#define EMPLOYEE_H

#include <string>

// Declaring Employee class
class Employee {
private:
    int id;
    std::string name;
    std::string position;
    double salary;

public:
    // Constructor
    Employee(int id, const std::string& name, const std::string& position, double salary);

    // Getter methods
    int getId() const;
    std::string getName() const;
    std::string getPosition() const;
    double getSalary() const;

    // Setter methods
    void setName(const std::string& newName);
    void setPosition(const std::string& newPosition);
    void setSalary(double newSalary);

    // Display employee details
    void displayDetails() const;
};

#endif // EMPLOYEE_H

