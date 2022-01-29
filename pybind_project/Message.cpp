#include "Message.h"
#include <iostream>
#include <vector>

void Message::PrintMsg(Message msg)
{
    cout<<"Id: "<<msg._id<<"Msg: "<<msg._msg<<endl;
}

int Message::getMsgId()
{
    return this->_id;
}

string Message::getMsgText()
{
    return this->_msg;
}

