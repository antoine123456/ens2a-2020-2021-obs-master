//
// Created by Noël Plouzeau on 2021-02-17.
//

#pragma once


#include "subject.h"

class Subject;

class Observer {

public:
    virtual ~Observer();

    virtual void update(Subject *s) = 0;
};



