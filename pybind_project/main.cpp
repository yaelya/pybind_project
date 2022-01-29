#include "Message.h"
#include <iostream>
#include <vector>
#include <string> 

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

// Fill the messages vec, with tmp message
void fill_messages_vec(std::vector<Message> &msg_vec)
{
    cout<<"Fill messages vector."<<endl;
    for (int i = 1; i <= MAX_MSGS; ++i)
    {
        string msg_text = "This is new message! message number is: " + std::to_string(i); 
        msg_vec.push_back(Message(i, msg_text));
    }
}

PYBIND11_MODULE(module_name, m) {
    m.doc() = "Send meggase vector from Cpp to python";
    py::class_<Message>(
        m, "Message"   
    )
    .def("get_msg_id", &Message::getMsgId)
    .def("get_msg_text", &Message::getMsgText)
    ;
    
    // Returns vector of Messages
    m.def("get_messages_vec", [](){ 
        std::vector<Message> msg_vec;
        fill_messages_vec(msg_vec);
        return msg_vec;
    });
}