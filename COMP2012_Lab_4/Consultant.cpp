/*
 * Consultant.cpp
 *
 */

#include "Consultant.h"

Consultant::Consultant(int cid, string cname, double base): cid(cid), cname(cname), baseSalary(base) {
}

double Consultant::getBaseSalary() const {
	return baseSalary;
}

void Consultant::setBaseSalary(double base) {
	baseSalary = base;
}

double Consultant::netSalary(double salary) const {
	return 0; //Dummy statement, you can delete or modify it after you complete this function.
}

void Consultant::check(Item item) const {
}




