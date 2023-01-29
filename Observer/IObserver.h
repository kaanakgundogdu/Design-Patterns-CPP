#ifndef IOBSERVER_H
#define IOBSERVER_H
#include <iostream>

class IObserver{
public:
    virtual ~IObserver(){}
    virtual void update(const std::string& message_from_subject)=0;
};

#endif // IOBSERVER_H
