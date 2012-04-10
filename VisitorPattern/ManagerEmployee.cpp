//
//  ManagerEmployee.cpp
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "ManagerEmployee.h"

std::string ManagerEmployee::Infomation()
{
    return m_name + " is " + m_job;
}

void ManagerEmployee::setName(std::string name)
{
    m_name = name;
}
void ManagerEmployee::setJob(std::string job)
{
    m_job = job;
}

void ManagerEmployee::Accept(VisitorBase *visitor)
{
    visitor->Visit(this);
}