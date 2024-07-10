#ifndef DIRECT_MESSAGE_H
#define DIRECT_MESSAGE_H

#include "content.h"

class direct_message : public content
{
public:
    direct_message();
    void SETowner();
    void SENDmessage();
};

#endif // DIRECT_MESSAGE_H
