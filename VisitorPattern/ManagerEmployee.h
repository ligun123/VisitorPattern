//
//  ManagerEmployee.h
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef VisitorPattern_ManagerEmployee_h
#define VisitorPattern_ManagerEmployee_h
#include "Employee.h"

class ManagerEmployee : public Employee {
    std::string m_name;
    std::string m_job;
public:
    std::string Infomation();
    void setName(std::string name);
    void setJob(std::string job);
    void Accept(VisitorBase *visitor);
};

#endif
