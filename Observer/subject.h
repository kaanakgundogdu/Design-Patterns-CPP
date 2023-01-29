#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include "ISubject.h"


class Subject:public ISubject
{
public:
    Subject();
    ~Subject();
    void attach(IObserver* observer) override;
    void detach(IObserver* observer) override;
    void notify() override;
    void create_message(std::string msg="Nothing is here");
    void observer_count();

private:
    std::list<IObserver*> observer_list;
    std::string message;

};

#endif // SUBJECT_H
