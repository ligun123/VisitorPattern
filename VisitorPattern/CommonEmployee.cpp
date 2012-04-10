//
//  CommonEmployee.cpp
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "CommonEmployee.h"
std::string CommonEmployee::Infomation()
{
    return m_name + " is " + m_job;
}

void CommonEmployee::setName(std::string name)
{
    m_name = name;
}
void CommonEmployee::setJob(std::string job)
{
    m_job = job;
}

void CommonEmployee::Accept(VisitorBase *visitor)
{
    visitor->Visit(this);
}