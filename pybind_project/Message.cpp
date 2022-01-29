#include "Message.h"
#include <iostream>
#include <vector>

void Message::PrintMsg(Message msg)
{
    cout<<"Id: "<<msg._id<<"Msg: "<<msg._msg<<endl;
}

int Message::GetMsgId()
{
    return this->_id;
}

string Message::GetMsgText()
{
    return this->_msg;
}

