//
// Created by Noël Plouzeau on 2021-02-17.
//

#include <iostream>
#include "observerimpl.h"

ObserverImpl::ObserverImpl() {}

ObserverImpl::~ObserverImpl()  {}

void ObserverImpl::update(Subject *subject) {

    std::cout << "Message de " << this
    << " le sujet " << subject << "vaut maintenant "
    << subject->getValue() << std::endl;
}
