#include <string> 

#define MAX_MSGS 100
using namespace std;

class Message {
public:
    Message(){};
    Message(int id, string message): _id(id), _msg(message) {};
    void PrintMsg(Message msg);
    int getMsgId();
    string getMsgText();

private:
    int _id;
    string _msg;
};

