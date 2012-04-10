//
//  VisitorBase.h
//  VisitorPattern
//
//  Created by Gun Li on 4/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef VisitorPattern_Visitor_h
#define VisitorPattern_Visitor_h

class Employee;
class ManagerEmployee;
class CommonEmployee;

class VisitorBase {
public:
    VisitorBase(){}
    virtual ~VisitorBase(){}
    
    virtual void Visit(Employee *yee) = 0;
    virtual void Visit(ManagerEmployee *employee) = 0;
    virtual void Visit(CommonEmployee *employee) = 0;
};

#endif
