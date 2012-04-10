//
//  main.cpp
//  VisitorPattern
//  概念：表示一个作用于某对象结构中的各元素的操作。它使你可以在不改变各元素的类的前提下定义作用于这些元素的新操作。
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
