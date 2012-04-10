//
//  Employee.h
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef VisitorPattern_Employee_h
#define VisitorPattern_Employee_h
#include "VisitorBase.h"

class VisitorBase;

class Employee {
public:
    Employee(){}
    virtual ~Employee(){}
    
    virtual void Accept(VisitorBase *visitor);
    virtual std::string Infomation() = 0;
};
#endif
