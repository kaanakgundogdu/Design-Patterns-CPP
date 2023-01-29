#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include "IObserver.h"
#include "subject.h"

class Observer:public IObserver
{
public:
    Observer(Subject& sbj);
    ~Observer();
    void update(const std::string& message_from_subject) override;
    void remove_from_list();
    void print_info();
    static int getObserver_id();

private:
    std::string message_from_s;
    Subject& subject;
    static int observer_id;
    int number;
};

#endif // OBSERVER_H
