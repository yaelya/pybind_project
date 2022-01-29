from build.module_name import *

def print_messages_vec():
    messages = get_messages_vec()
    for m in messages:
        print('Message Id: {0}, Message text: {1}'.format(m.get_msg_id(), m.get_msg_text()))
        
        
def main():
    print_messages_vec()
    

if __name__ == "__main__":
    main()
