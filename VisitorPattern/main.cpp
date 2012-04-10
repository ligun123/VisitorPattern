//
//  main.cpp
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "HRVisitor.h"
#include "ManagerEmployee.h"
#include "CommonEmployee.h"

int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    ManagerEmployee *manager = new ManagerEmployee;
    manager->setName("Roy");
    manager->setJob("Leader");
    CommonEmployee *common = new CommonEmployee;
    common->setName("Micle");
    common->setJob("Coder");
    HRVisitor *visitor = new HRVisitor;
    manager->Accept(visitor);
    common->Accept(visitor);
    
    return 0;
}
