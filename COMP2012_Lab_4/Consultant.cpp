/*
 * Consultant.cpp
 *
 */

#include "Consultant.h"
#include <cmath>

Consultant::Consultant(int cid, string cname, double base): Employee(cid, cname), baseSalary(base) {
}

double Consultant::getBaseSalary() const {
	return baseSalary;
}

void Consultant::setBaseSalary(double base) {
	baseSalary = base;
}

double Consultant::netSalary(double salary) const {
	double taxable = salary;
	double tax = 0;
	if (taxable < 40000) {
		return salary; // no tax
	} else {
		tax += fmin(40000, taxable) * 0.02;
		taxable -= 40000;
	}
	if (taxable >= 0) {
		tax += fmin(40000, taxable) * 0.07;
		taxable -= 40000;
	}
	if (taxable >= 0) {
		tax += fmin(40000, taxable) * 0.12;
		taxable -= 40000;
	}
	if (taxable >= 0) {
		tax += taxable * 0.17;
	}
	return salary - tax;
}

void Consultant::check(Item item) const {
	switch(item) {
	case Item::id:
		cout << "ID: " << this->getID() << endl;
		break;
	case Item::name:
		cout << "Name: " << this->getName() << endl;
		break;
	case Item::base_salary:
		cout << "Base Salary: " << this->getBaseSalary() << endl;
		break;
	case Item::net_salary:
		cout << "Net Salary: " << this->netSalary(this->baseSalary) << endl;
		break;
	default:
		cout << "Invalid item." << endl;
	}
}
