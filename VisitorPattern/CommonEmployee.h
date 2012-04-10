//
//  CommonEmployee.h
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef VisitorPattern_CommonEmployee_h
#define VisitorPattern_CommonEmployee_h
#include "Employee.h"

class CommonEmployee : public Employee {
    std::string m_name;
    std::string m_job;
public:
    std::string Infomation();
    void setName(std::string name);
    void setJob(std::string job);
    void Accept(VisitorBase *visitor);
};

#endif
