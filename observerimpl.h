//
// Created by Noël Plouzeau on 2021-02-17.
//

#pragma once


#include "observer.h"

class ObserverImpl : public Observer {

public:
    ObserverImpl();
    virtual ~ObserverImpl();

    virtual void update(Subject *subject) override;
};



