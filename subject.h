//
// Created by Noël Plouzeau on 2021-02-17.
//

#pragma once


#include <string>
#include "observer.h"

class Observer;

class Subject {

public:
    virtual ~Subject();

    virtual std::string getValue() = 0;

    virtual void setValue(std::string newValue) = 0;

    virtual bool isRegistered(Observer *o) = 0;

    virtual void registerObserver(Observer *o) = 0;

    virtual void unregisteredObserver(Observer *o) = 0;
};



