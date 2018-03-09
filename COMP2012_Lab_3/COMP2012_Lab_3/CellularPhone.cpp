//
//  CellularPhone.cpp
//  COMP2012_Lab_3
//
//  Created by Chihim Ng on 9/3/2018.
//  Copyright © 2018 Chihim Ng. All rights reserved.
//

#include "CellularPhone.h"

CellularPhone::CellularPhone(const string& vendor, int num) {
    this->vendor = vendor;
    this->num = num;
}

CellularPhone::~CellularPhone() {

}

void CellularPhone::turn_on() {
    this->status = true;
    cout << "The phone is on." << endl;
}

void CellularPhone::turn_off() {
    this->status = false;
    cout << "The phone is off." << endl;
}

void CellularPhone::call(int num) {
    if (!this->is_available()) {
        cout << "Cannot make phone calls when the phone is unavailable." << endl;
        return;
    }
    cout << "Make phone call from " << this->num << " to " << num << "." << endl;
    this->battery -= 0.01f;
}

bool CellularPhone::is_available() const {
    return this->status && this->battery > 0.0f;
}

void CellularPhone::print() const {
    cout << "This is a phone from " << this->vendor << "! The phone number is " << this->num << ". The battery life is " << this->battery * 100 << "%." << endl;
}

string CellularPhone::get_vendor() const {
    return this->vendor;
}

int CellularPhone::get_num() const {
    return this->num;
}

float CellularPhone::get_battery() const {
    return this->battery;
}

void CellularPhone::set_battery(float battery) {
    this->battery  = battery;
}
