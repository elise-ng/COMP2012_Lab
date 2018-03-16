#include "EducationalConsultant.h"

EducationalConsultant::EducationalConsultant(int id, string name, double base, double wage, int hour) : Consultant(id, name, base), wagePerHour(wage), workingHours(hour) {
}

double EducationalConsultant::getWage() const {
  return this->wagePerHour;
}

int EducationalConsultant::getHours() const {
  return this->workingHours;
}

void EducationalConsultant::setWage(double wage) {
  this->wagePerHour = wage;
}

void EducationalConsultant::setHours(int hours) {
  this->workingHours = hours;
}

double EducationalConsultant::performanceSalary() const {
  return this->getWage() * this->getHours();
}

double EducationalConsultant::netSalary() const {
  return this->Consultant::netSalary(this->Consultant::getBaseSalary() + this->performanceSalary());
}

void EducationalConsultant::check(Item item) const {
  switch (item) {
    case Item::performance_salary:
      cout << "Performance Salary: " << this->performanceSalary() << endl;
      break;
    case Item::net_salary:
      cout << "Net Salary: " << this->netSalary() << endl;
      break;
    default:
      this->Consultant::check(item);
  }
}
