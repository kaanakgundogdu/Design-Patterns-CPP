#include "observer.h"

int Observer::observer_id=0;

Observer::Observer(Subject &sbj):subject(sbj)
{
    subject.attach(this);
    std::cout<<"I'm observer and added list my id: "<<++observer_id<<"\n";
    number=observer_id;
}


Observer::~Observer()
{
    std::cout<<"Observer dest. "<<number<<"\n";
}

void Observer::update(const std::string &message_from_subject)
{
    message_from_s=message_from_subject;
    print_info();
}

void Observer::remove_from_list()
{
    subject.detach(this);
    std::cout<<"Observer no:"<<number<<" removed from list\n";
}

void Observer::print_info()
{
    std::cout<<"Observer no: "<<number<<": new message avaible:\t"<<message_from_s<<"\n";
}

