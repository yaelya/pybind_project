#include "Message.h"
#include <iostream>
#include <vector>
#include <string> 

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

// Fill the messages vec
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
    .def(py::init<int, string>())
    .def("print_msg", &Message::PrintMsg)
    ;

	// messages_dict is an python dict that will contian {"ID", "MSG"} EX: {12: ""}
    m.def("get_messages_vec", [](py::dict messages_dict){ 
        std::vector<Message> msg_vec;
        fill_messages_vec(msg_vec);
        // cast to python dict
        for (Message m: msg_vec)
        {
            // using py::cast in order to parse from c++ map to python dict.
			messages_dict[py::cast(m.get_msg_id(m))] = m.get_msg_text(m);
        }
    });
}