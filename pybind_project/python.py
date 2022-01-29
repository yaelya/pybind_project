from build.module_name import *

def print_messages_vec():
    messages_dict = {}
    get_messages_vec(messages_dict)
    # m = Message()
    # print(messages_dict)
    for msg_id, msg_text in messages_dict.items():
        print(f"Message Id: {msg_id}, Message text: {msg_text}")
        # Message.print_msg(msg)


def main():
    print_messages_vec()
    

if __name__ == "__main__":
    main()
