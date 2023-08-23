#include <iostream>
#include "Employee.h"

// Constructor
Employee::Employee(int id, const std::string& name, const std::string& position, double salary)
    : id(id), name(name), position(position), salary(salary) {}

// Getter methods
int Employee::getId() const {
    return id;
}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getPosition() const {
    return position;
}

double Employee::getSalary() const {
    return salary;
}

// Setter methods
void Employee::setName(const std::string& newName) {
    name = newName;
}

void Employee::setPosition(const std::string& newPosition) {
    position = newPosition;
}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}

// Display employee details
void Employee::displayDetails() const {
    std::cout << "ID: " << id << "\nName: " << name << "\nPosition: " << position << "\nSalary: " << salary << std::endl;
}
