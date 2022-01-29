#include "Message.h"
#include <iostream>
#include <vector>

void Message::PrintMsg(Message msg)
{
    cout<<"Id: "<<msg.id<<"Msg: "<<msg.msg<<endl;
}

int Message::get_msg_id(Message mgs)
{
    return mgs.id;
}

string Message::get_msg_text(Message mgs)
{
    return mgs.msg;
}

