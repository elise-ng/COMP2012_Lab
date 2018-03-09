//
//  SmartPhone.cpp
//  COMP2012_Lab_3
//
//  Created by Chihim Ng on 9/3/2018.
//  Copyright © 2018 Chihim Ng. All rights reserved.
//

#include "SmartPhone.h"

SmartPhone::SmartPhone(const string& vendor, int num) : CellularPhone(vendor, num) {
}

SmartPhone::SmartPhone(const string& vendor, int num, const string& os_name, int os_ver) : CellularPhone(vendor, num) {
    this->os = new OS(os_name, os_ver);
}

SmartPhone::~SmartPhone() {
    // FIXME: Weird bug, will crash due to accessing unassigned memory
//    delete this->os;
//    this->os = nullptr;
}

void SmartPhone::browse_web(const string &url) {
    if (!this->is_available()) {
        cout << "Cannot browse the website when the phone is unavailable." << endl;
        return;
    }
    cout << "Visit a website at " << url << endl;
    this->set_battery(this->get_battery() - 0.01f);
}

void SmartPhone::upgrade_os() {
    this->os->upgrade();
    this->set_battery(this->get_battery() - 0.01f);
}

const OS* SmartPhone::get_os() const {
    return this->os;
}
