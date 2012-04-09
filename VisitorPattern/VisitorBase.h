//
//  VisitorBase.h
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef VisitorPattern_Visitor_h
#define VisitorPattern_Visitor_h
#include "Employee.h"
#include "ManagerEmployee.h"
#include "CommonEmployee.h"

class VisitorBase {
public:
    VisitorBase(){};
    virtual ~VisitorBase(){};
    
    virtual int GetTotalSalary() = 0;
    virtual void visit(Employee employee) = 0;
};

#endif
