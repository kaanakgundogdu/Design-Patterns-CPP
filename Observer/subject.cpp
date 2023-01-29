#include "subject.h"

Subject::Subject()
{

}

Subject::~Subject()
{
    std::cout<<"Subject's dest. called\n";
}

void Subject::attach(IObserver *observer)
{
    observer_list.push_back(observer);
}

void Subject::detach(IObserver *observer)
{
    observer_list.remove(observer);
}

void Subject::notify()
{
    std::list<IObserver*>::iterator it=observer_list.begin();

    observer_count();
    while (it!=observer_list.end()) {
        (*it)->update(message);
        ++it;
    }

}

void Subject::create_message(std::string msg)
{
    this->message=msg;
    notify();
}

void Subject::observer_count()
{
    std::cout<<"Obs. count is: "<<observer_list.size()<<"\n";
}
