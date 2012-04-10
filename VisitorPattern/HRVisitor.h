//
//  HRVisitor.h
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef VisitorPattern_HRVisitor_h
#define VisitorPattern_HRVisitor_h
#include "VisitorBase.h"
#include "ManagerEmployee.h"
#include "CommonEmployee.h"

class HRVisitor : public VisitorBase {
public:
    HRVisitor(){}
    ~HRVisitor(){}
    
    void Visit(Employee *employee);
    void Visit(ManagerEmployee *employee);
    void Visit(CommonEmployee *employee);
};

#endif
