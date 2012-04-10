//
//  HRVisitor.cpp
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "HRVisitor.h"

void HRVisitor::Visit(Employee *employee)
{
    std::string info = employee->Infomation();
    printf("do with base employee->%s\n",info.c_str());
}

void HRVisitor::Visit(ManagerEmployee *employee)
{
    std::string info = employee->Infomation();
    printf("do sth diffirent with base manager employee->%s\n",info.c_str());
}

void HRVisitor::Visit(CommonEmployee *employee)
{
    std::string info = employee->Infomation();
    printf("do sth diffirent with base common employee->%s\n",info.c_str());
}