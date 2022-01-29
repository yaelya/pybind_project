#include <string> 

#define MAX_MSGS 100
using namespace std;

class Message {
public:
    Message(){};
    Message(int id, string message): id(id), msg(message) {};
    void PrintMsg(Message msg);
    int get_msg_id(Message mgs);
    string get_msg_text(Message mgs);

private:
    int id;
    string msg;
};

