#include <iostream>
#include "subject.h"
#include "observerimpl.h"

int main() {
    std::cout << "TP Observer" << std::endl;

    Subject *subject; // TODO instancier

    Observer *obs1(new ObserverImpl());
    Observer *obs2(new ObserverImpl());

    return 0;
}
